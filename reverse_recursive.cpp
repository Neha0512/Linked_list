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

void reversed(Node *head, Node *curr, Node *prev){
	if(curr==NULL){
		head=prev;
		return;
	}
	Node *forw=curr->next;
	reversed(head, forw, curr);
	curr->next=prev;
}

Node *rev(Node *head){
	Node *prev=NULL;
	Node *curr=head;
	reversed(head, curr, prev);
	return head;
	
}

int main()
{
	Node *head= new Node(10);
	head->next= new Node(20);
	head->next->next= new Node(30);
	head->next->next->next= new Node(40);
	head=rev(head);
	print(head);
	return 0;
}
