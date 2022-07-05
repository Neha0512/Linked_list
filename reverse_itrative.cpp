#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node (int x){
		data=x;
		next=NULL;
	}
};
void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
}

Node *reversed(Node *head){
		if(head==NULL || head->next==NULL){
		return head;
	}
	Node *prev=NULL;
	Node *curr=head;
	Node *forward=NULL;

	while(curr!=NULL){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
	}
	return prev;
}

int main()
{
	Node *head= new Node(10);
	head->next= new Node(20);
	head->next->next= new Node(30);
	head->next->next->next= new Node(40);
	
	head=reversed(head);
	print(head);
	
	return 0;
}
