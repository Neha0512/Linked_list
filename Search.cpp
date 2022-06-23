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

int searchEle(Node *head, int x)
{
	int i=1;
	Node *temp=head;
	while(temp!=NULL){
		if(temp->data==x)
		return i;
	
	else{
		i++;
		temp=temp->next;
	}
}
	return -1;
}

int main(){
	Node *head= new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	cout<<searchEle(head, 30);
}
