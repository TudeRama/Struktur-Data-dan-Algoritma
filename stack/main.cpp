#include <iostream>
#include "stack.h"
using namespace std;

int main(int argc, char** argv) {
	Stack stack1;
	
	stack1.push(10);
	stack1.push(20);
	stack1.push(30);
	stack1.push(40);
	stack1.pop();
	
	
	cout <<"top: " <<stack1.top->value<<endl;
	
	stack1.printAll();
	return 0;
}
