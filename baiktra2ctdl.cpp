#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *LinkL;
	Node *LinkR;
};

typedef Node* Tree;

Tree makeNode(int x){
	Tree tmp = new Node();
	tmp->data = x;
	tmp->LinkL = NULL;
	tmp->LinkR = NULL;
	return tmp;
}

Tree makeTree(Tree &t){
	return NULL:
}

void AddNode(Tree &t, int x){
	if(t == NULL){
		Tree tmp = makeNode(x);
		t = tmp;
	}
	else{
		if(t->data == x) return;
		if(t->data > x) AddNode(t->LinkL, x);
		if(t->data < x) AddNode(t->LinkR, x);
	}
}

void Count(Tree t, int &cnt){
	if(t != NULL){
		cnt++;
		Count(t->LinkL, cnt);
		Count(t->LinkR, cnt);
	}
}
int main(){
	
}
