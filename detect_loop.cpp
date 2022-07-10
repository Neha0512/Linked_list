// several methods to detect loop : 
// 1) by using bool visited and marking every visited node true, the one visited again will return false
// 2) by changing pointer: next of every node will be stored in a temp node
// 3)using hashing(below)

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

bool dLoop(Node *head){
	unordered_set<Node*> s;
	for(Node *curr=head; curr!=NULL; curr=curr->next){
		if(s.find(curr)!=s.end())
		return true;
		s.insert(curr);
	}
	return false;
}

int main(){
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	dLoop(head);
}

