#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* LinkL;
	Node* LinkR;
};

typedef Node* Tree;

Node* CreateNode(int x){
	Node* tmp = new Node();
	tmp->data = x;
	tmp->LinkL = NULL;
	tmp->LinkR = NULL;
	return tmp;
}

Tree KhoiTao(){
	return NULL;
}

void Push(Tree &t, int x){
	if(t == NULL){
		Tree tmp = CreateNode(x);
		t = tmp;
	}
	if(t != NULL){
		if(t->data == x) return;
		if (x < t->data) return Push(t->LinkL, x);
		if (x > t->data) return Push(t->LinkR, x);
	}
}

Node* findNode(Tree t, int x){
	if(t != NULL){
		if(t->data == x) return t;
		else{
			if(x > t->data) return findNode(t->LinkR, x);
			if(x < t->data) return findNode(t->LinkL, x);
		}
	}
	return NULL;
}
void DuyetTruoc(Tree t){
	if(t != NULL){
		cout << t->data << " ";
		DuyetTruoc(t->LinkL);
		DuyetTruoc(t->LinkR);
	}
}

void DuyetSau(Tree t){
	if(t != NULL){
		DuyetSau(t->LinkL);
		cout << t->data << " ";
		DuyetSau(t->LinkR);
	}
}

void DuyetGiua(Tree t){
	if(t != NULL){
		DuyetGiua(t->LinkL);
		DuyetSau(t->LinkR);
		cout << t->data << " ";
	}
}

int main(){
	Tree t = KhoiTao();
	Push(t, 7);
	Push(t, 20);
	Push(t, 21);
	Push(t, -1);
	Push(t, 5);
	Push(t, -3);
	Push(t, 19);
	DuyetTruoc(t);
	cout << endl;
	DuyetSau(t);
	cout << endl;
	DuyetGiua(t);
}
