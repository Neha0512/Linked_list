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

void deletR(Node *ptr){
	Node *temp=ptr->next;
	ptr->data=temp->data;
	ptr->next=temp->next;
	delete(temp);
}

void printl(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	Node *ptr=head->next->next;
	deletR(ptr);
	printl(head);	
}
