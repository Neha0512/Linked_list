// Time complexity is theta(n), where n is the number of nodes, because we are traversing throughout the liked list except the last node.

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

Node *delete_last(Node *head)
{
	if(head==NULL)
	return NULL;
	if(head->next==NULL)
	{
		delete (head);
		return NULL;
	}
	Node *temp=head;
	while(temp->next->next!=NULL)
		temp=temp->next;
		delete (temp->next);
		temp->next=NULL;
	return head;
}
void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head=delete_last(head);
	print(head);
	return 0;
}
