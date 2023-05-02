#include <iostream>
#include "stack.h"
using namespace std;

void Stack::push(int input){
	Node* temp = new Node;
    temp->value = input;
    temp->next = top;
    top = temp;
}
void Stack::pop(){
	if (top == NULL) {
            cout << "Stack is empty." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
} 
void Stack::printAll(){
	Node *tmp = top;
	while(tmp!=NULL){
		cout<<tmp->value<<"->";
		tmp = tmp->next;
	}
	cout<<endl;
}
