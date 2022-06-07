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

Node *delete_front(Node *head)
{
	if(head==NULL)
	return NULL;
	else{
		Node *temp=head->next;
		delete(head);
		return temp;
	}
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


int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head= delete_front(head);
	print(head);
	return 0;
}
