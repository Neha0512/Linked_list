#include<bits/stdc++.h>
using namespace std;

struct Node {
	Node *next;
	int data;
	Node (int x){
		data=x;
		next=NULL;
	}
};

void printl(Node *head){
	if(head==NULL){
		return;
	}
	cout<<head->data<<" ";
	Node *x=head->next;
	while(x!=head){
		cout<<x->data<<" ";
		x=x->next;
	}
	
}

int main(){
	Node *head= new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next=head;
	printl(head);
	
}
