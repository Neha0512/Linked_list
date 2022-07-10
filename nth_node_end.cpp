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

void nth(Node *head, int n)
{
	if(head==NULL)
	return;
	Node *first=head;
	Node *second=head;
	for(int i=0; i<n; i++){
		if(first==NULL){
			return;
		}
		first=first->next;
	}
	while(first!=NULL){
		first=first->next;
		second=second->next;
	}
	cout<< second->data;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    nth(head,2);
}

