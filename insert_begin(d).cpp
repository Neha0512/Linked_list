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

void print(Node *head){
	Node *temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

Node *inser(Node *head, int x){
	Node *curr=new Node(x);
	curr->next=head;
	if(head!=NULL){
	head->prev=curr;
	}
	return curr;
} 

int main(){
	Node *head=new Node(10);
	Node *temp=new Node(34);
	head->next=temp;
	temp->prev=head;
	head=inser(head,5);
	print(head);
}
