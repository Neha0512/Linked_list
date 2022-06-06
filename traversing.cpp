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

int main()
{
	Node *head= new Node(10);
	head->next= new Node(20);
	head->next->next= new Node(30);
	head->next->next->next= new Node(40);
	print(head);
	return 0;
}
