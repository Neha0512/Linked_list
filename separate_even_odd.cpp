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

Node *separate(Node *head){
	Node *even1=NULL, *even2=NULL, *odd1=NULL, *odd2=NULL;
	for(Node *curr=head; curr!=NULL; curr=curr->next){
		int a=curr->data;
		if(a%2==0){
			if(even1==NULL){
				even1=curr;
				even2=even1;
			}
			else{
				even2->next=curr;
				even2=even2->next;
			}
		}
			else{
				if(odd1==NULL){
					odd1=curr;
					odd2=odd1;
				}
				else{
					odd2->next=curr;
					odd2=odd2->next;
				}
		}
	}
	
	if(even2==NULL || odd2==NULL)
	return head;
	even2->next=odd1;
	odd2->next=NULL;
	return even1;
	
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
	head->next=new Node(21);
	head->next->next=new Node(33);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head=separate(head);
	printl(head);	
	return 0;
}
