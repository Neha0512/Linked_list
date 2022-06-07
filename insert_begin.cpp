// time complexity is O(1)

#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *insert(Node *head, int x)
{
	Node *res= new Node(x);
	res->next=head;
	return res;
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
	Node *head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	print(head);
	return 0;
}
