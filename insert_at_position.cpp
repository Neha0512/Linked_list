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

int insertAt(Node *head, int pos, int data){
	Node *temp=new Node(data);
	if(pos==1){
		temp->next=head;
		return temp;
	}
	Node *a=head;
	for(int i =1; i<pos-2 && a!=NULL ; i++){
		a=a->next;
		if(a==NULL){
			return head;
		}
		temp->next=a->next;
		a->next=temp;
	}
	return head;
}

void print(Node *head){
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	
}

int main()
{
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next= new Node(30);
	head->next->next->next=new Node(40);
	insertAt(head, 2, 15);
	print(head);
	
	
}
