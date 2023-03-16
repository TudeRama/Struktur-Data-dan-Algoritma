//rekursif binary search
#include <bits/stdc++.h>
using namespace std;
//membuat function
int binarySearch(int arr[], int awal, int akhir, int x)
{
	if (akhir >= awal) {//menentukan apakah nilai akhir array lebih besar atau sama dengan dari nilai awal array
		int tengah = awal + (akhir - awal) / 2;//menentukan nilai tengah dari array

		if (arr[tengah] == x)//jika nilai yang dicari sama dengan nilai tengah maka nilai tersebut akan menajadi hasilnya
			return tengah;

		
		if (arr[tengah] > x)//jika nilai tengah lebih besar dari nilai yang dicari maka akan memanggil kembali function dan mengganti nilai akihir dengan tengah -1
			return binarySearch(arr, awal, tengah - 1, x);
		
		return binarySearch(arr, tengah + 1, akhir, x);//jika nilai tengah lebih kecil dari nilai yang dicari maka akan memanggil kembali function dan mengganti nilai awal dengan tengah +1
	}
	return 0;
}

int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 };// mengisikan nilai dari array
	int x =2; //nilai dalam array yang ingin dicari
	int n = sizeof(arr) / sizeof(arr[0]);//menentukan panjang array
	int result = binarySearch(arr, 0, n, x);// memasukan nilai ke fuction binarySearch
	cout << "Nilai yang kamu cari ada di index " << result;
	return 0;
}

