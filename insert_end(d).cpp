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

Node *inser(Node *head, int x){
	Node *temp=new Node(x);
	if(head==NULL){
		return temp;
	}
	Node *res=head;
	while(res->next!=NULL){
		res=res->next;
		}
		res->next=temp;
		temp->prev=res;
	
	return head;
}

void printl(Node *head)
{
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
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
	inser(head,50);
	printl(head);
}
