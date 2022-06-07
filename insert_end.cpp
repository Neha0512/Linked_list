#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node (int x)
	{
		data=x;
		next=NULL;
	}
};

void insert(Node *head, int x){
	Node *temp=new Node(x);
	if(head==NULL)
	return temp;
	Node *curr=head;
	while(curr!=NULL)
	{
		curr=curr->next;
	
	}
	curr->next=temp;
	return head;
}

int main()
{
	Node *head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	return 0;
}
