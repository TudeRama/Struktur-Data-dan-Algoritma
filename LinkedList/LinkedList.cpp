#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	Node *newNode = new Node();
	newNode->value= input;
	
	newNode->next= head;
	head = newNode;
	
	if(tail==NULL)
	tail=head;
}
void LinkedList::insertToTail(int input){
	Node *newNode = new Node();
	newNode->value= input;
	
	Node *tmp= tail;
	tail->next = newNode;
	tail=newNode;
	
}
void LinkedList::insertAfter(int x, int b){
	Node *newNode= new Node();
	newNode->value=x;
	Node *tmp= head->next;
	tmp->value=b;
	
	newNode->next=tmp->next;
	tmp->next=newNode;	
	
	
}
void LinkedList::printAll(){
	Node *tmp = head;
	while(tmp!=NULL){
		cout<<tmp->value<<"->";
		tmp = tmp->next;
	}
	cout<<endl;
}
