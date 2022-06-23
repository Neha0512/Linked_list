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

int Search(Node *head, int x)
{
	if(head==NULL){
		return -1;
	}
	if(head->data==x){
		return 1;
	}
	else{
		int res=Search(head->next, x);
		if(res==-1)
		return -1;
		else{
			return res+1;
		}
	}
}

int main(){
	Node *head= new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	cout<<Search(head, 30);
}
