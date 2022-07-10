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

bool dLoop(Node *head){
	Node *slow=head;
	Node *fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		}
	}
		return false;
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=head->next;
	if (dLoop(head)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}
