#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};
typedef Node* node;
node makeNode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
bool empty(node a){
	return (a==NULL);
}
int size(node a){
	int cnt=0;
	while(a!=NULL){
		++cnt;
		a=a->next;
	}
	return cnt;
}
void insertFirst(node &a,int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
void insertLast(node &a,int x){
	node tmp=makeNode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}

void insertMid(node &a,int x,int pos){
	int n=size(a);
	if(pos<=0||pos>n+1){
		cout<<"Vi tri khong hop le!";return;
	}
	if(pos==1){
		insertFirst(a,x);return;
	}
	else if(pos==n+1){
		insertLast(a,x);return;
	}
	node p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	node tmp=makeNode(x);
	tmp->next=p->next;
	p->next=tmp;
}

void deleteFirst(node &a){
	if(a==NULL) return;
	a=a->next;
}

void deleteLast(node &a){
	if(a==NULL) return;
	node truoc=NULL,sau=a;
	while(sau->next!=NULL){
		truoc=sau;
		sau=sau->next;
	}
	if(truoc==NULL){
		a=NULL;
	}
	else{
		truoc->next=NULL;
	}
}
int main(){
	node head=NULL;
}
