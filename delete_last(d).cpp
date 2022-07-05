#include<bits/stdc++.h>
using namespace std;

struct Node{
	Node *prev;
	Node *next;
	int data;
	Node (int x){
		data=x;
		prev=next=NULL;
	}
};

Node *deletL(Node *head){
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node *temp=head;
	
	while(temp->next!=NULL){
		temp=temp->next;
		}
		temp->prev->next=NULL;
		delete temp;
	
	return head;
}
void printl(Node *head)
{
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	Node *head= new Node(10);
	Node *temp=new Node(20);
	head->next=temp;
	temp->prev=head;
	Node *temp2=new Node(30);
	temp->next=temp2;
	temp2->prev=temp;
	deletL(head);
	printl(head);
}
