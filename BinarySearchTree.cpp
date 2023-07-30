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
	return NULL;
}

void AddTree(Tree &t, int x){
	if(t == NULL){
		Tree tmp = makeNode(x);
		t = tmp;
	}
	else{
		if(t->data == x) return;
		if(t->data < x) AddTree(t->LinkR, x);
		if(t->data > x) AddTree(t->LinkL, x);
	}
}

bool FindNode(Tree t, int x){
	if(t != NULL){
		if(t->data == x) return true;
		if(t->data > x) return FindNode(t->LinkL, x);
		if(t->data < x) return FindNode(t->LinkR, x);
	}
	return false;
}

void DeleteTree(Tree &t){
	if(t != NULL){
		DeleteTree(t->LinkL);
		DeleteTree(t->LinkR);
		delete t;
	}
}

void XDCay(Tree &t, const int arr[], int n){
	for(int i = 0; i < n; i++){
		AddTree(t, arr[i]);
	}
}

void DuyetTruoc(Tree t){
	if(t != NULL){
		cout << t->data << " ";
		DuyetTruoc(t->LinkL);
		DuyetTruoc(t->LinkR);
	}
}

void DuyetGiua(Tree t){
	if(t != NULL){
		DuyetGiua(t->LinkL);
		cout << t->data << " ";
		DuyetGiua(t->LinkR);
	}
}

void DuyetSau(Tree t){
	if(t != NULL){
		DuyetSau(t->LinkL);
		DuyetSau(t->LinkR);
		cout << t->data << " ";
	}
}

int main(){
	int n;
	Tree t = makeTree(t);
	cout << "Nhap so phan tu: "; cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap so: "; cin >> arr[i];
	}
	XDCay(t, arr, n);
	cout << "Cay Duyet Truoc la: "; DuyetTruoc(t);
	cout << "\nCay Duyet Giua la: "; DuyetGiua(t);
	cout << "\nCay Duyet Sau la: "; DuyetSau(t);
	int x;
	cout << "\nNhap nut can tim trong cay: "; cin >> x;
	if(FindNode(t, x)) cout << "Nut co trong cay!" << endl;
	else cout << "Nut khong co trong cay!" << endl;
	DeleteTree(t);
}
