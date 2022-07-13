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

int intersect(Node *head1, Node *head2){
	Node *curr=head, *curr2=head2;
	int count=0, count2=0;
	while(curr!=NULL){
		count++;
		curr=curr->next;
	}
	
	
	while(curr2!=NULL){
		count2++;
		curr2=curr2->next;
	}
	
	
	int d=abs(count-count2);
	
	if(count>count2){
		for(int i=0 ; i<d; i++){
		
		if(curr==NULL){
			return -1;
		}
		curr=curr->next;
	}
	}
	else{
		for(int i=0 ; i<d; i++){
		
		if(curr2==NULL){
			return -1;
		}
		curr2=curr2->next;
	}
	}
	
	while(curr!=NULL && curr2!=NULL){
	if(curr==curr2)
	
	return curr->data;
	curr=curr->next;
	curr2=curr2->next;
	}
	return -1;
}

int main(){
	
		Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL;
	cout<<intersect(head1, head2);
}
	
