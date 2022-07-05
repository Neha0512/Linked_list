#include<bits/stdc++.h>
using namespace std;

struct Node{
	Node *next;
	Node *prev;
	int data;
	Node(int x){
	data=x;
	prev=next=NULL;
	}
};

Node *reverseD(Node *head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node *prev=NULL;
	Node *temp=head;
	while(temp!=NULL){
		prev=temp->prev;
		temp->prev=temp->next;
		temp->next=prev;
		temp=temp->prev;
	}
	return prev->prev;
}

void printl(Node *head){
	Node *curr=head;
	while(curr!=NULL){
	
	cout<<curr->data<<" ";
	curr=curr->next;
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
	head=reverseD(head);
	printl(head);
}
