#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node  *next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

Node *merge_sorted(Node *head){
	Node *a=head;
	Node *b=head1;
	if(head)
}

int main(){
	Node *head=new Node (10);
	head->next=new Node(20);
	head->next->next=new Node(35);
	
	Node *head1=new Node(5);
	head1->next=new Node(15);
	head1->next->next=new Node(25);
	head1->next->next->next=new Node(40);
	head=merge_sorted(head);
	printl(head);
}
