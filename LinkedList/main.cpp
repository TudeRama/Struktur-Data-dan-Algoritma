#include <iostream>
#include "LinkedList.h"
using namespace std;



int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(10);
	list1.insertToHead(20);
	list1.insertToHead(30);
	list1.insertToHead(40);
	list1.insertToHead(50);
	list1.insertToTail(60);
	list1.insertAfter(70,20);
	
	cout <<"head: " <<list1.head->value<<endl;
	cout <<"tail: " <<list1.tail->value<<endl;
	
	list1.printAll();
	return 0;
}
