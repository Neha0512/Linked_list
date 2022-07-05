// in even linked list we print the second middle element

#include<bits/stdc++.h>
using namespace std;

struct Node{
	Node *next;
	int data;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *middleE(Node *head){
	Node *first=head;
	Node *second=head;
	while(second!=NULL && second->next!=NULL){
		first=first->next;
		second=second->next->next;
	}
	cout<<first->data;
}

int main(){
	Node *head= new Node(10);
	head->next= new Node(20);
	head->next->next= new Node(30);
	head->next->next->next= new Node(40);
	middleE(head);
	return 0;
}
