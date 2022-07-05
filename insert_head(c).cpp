#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
	Node (int x){
		data=x;
		next=NULL;
	}
};

Node *insertH(Node *head, int x){
	Node *curr=new Node(x);
	if(head==NULL){
		curr->next=curr;
	}
	else{
		Node *temp=head;
		while(temp->next!=head){
			temp=temp->next;
			temp->next=curr;
			curr->next=head;
		}
	}
	return curr;
}

void printL(Node *head){
	if(head==NULL){
		return;
	}
	cout<<head->data<<" ";
	Node *x=head->next;
	while(x!=head){
		cout<<x->data<<" ";
		x=x->next;
	}
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next=head;
	head=insertH(head, 5);
	printL(head);
}
