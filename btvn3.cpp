#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

typedef Node* node;

//1
node KhoiTao(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

//2
void Huy(node &a){
	delete a;
}

//3
int Size(node a){
	int dem = 0;
	while(a != NULL){
		++dem;
		a = a->next;
	}
	return dem;
}

//4
void ThemDau(node &a, int x){
	node temp = KhoiTao(x);
	if(a == NULL){
		a = temp;
	}
	else{
		temp->next = a;
		a = temp;
	}
}

//5
void ThemCuoi(node &a, int x){
	node temp = KhoiTao(x);
	if(a == NULL){
		a = temp;
	}
	else{
		node p = a;
		while(p->next != NULL){
			p=p->next;
		}
		p->next = temp;
	}
}

//6
void Them(node &a, int x, int pos){
	int n = Size(a);
	if(pos < 0 || pos > n){
		cout<<"Vi tri khong hop le!"<<endl;return;
	}
	node temp = KhoiTao(x);
	if(pos == 0){
		ThemDau(a, x);return;
	}
	else if(pos == n){
		ThemCuoi(a, x);return;
	}
	else{
		node p = a;
		for(int i = 1; i < pos; i++){
			p = p->next;
		}
		temp->next = p->next;
		p->next = temp;
	}
}

//7
void Xoa(node &a, int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n){
		cout<<"Vi tri khong hop le!"<<endl;return;
	}
	node truoc = NULL, sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau->next;
	}
	if(truoc == NULL){
		a = a->next;
	}
	else{
		truoc->next = sau->next;
	}
}

//8
bool TonTai(node a, int x){
	while(a != NULL){
		if(a->data == x) return true;
		a = a->next;
	}
	return false;
}

void in(node a){
	while(a != NULL){
		cout<< a->data << " ";
		a = a->next;
	}
	cout<< endl;
}

int main(){
	node a = KhoiTao(5);
	in(a);
	
	cout<< "So luong phan tu cua node la: "<< Size(a) << endl;
	
	ThemDau(a, 2);
	cout<< "Node sau khi them phan tu vao dau la:\n";
	in(a);
	cout<< "So luong phan tu cua node la: "<< Size(a) << endl;
	
	ThemCuoi(a, 7);
	cout<< "Node sau khi them phan tu vao cuoi la:\n";
	in(a);
	cout<< "So luong phan tu cua node la: "<< Size(a) << endl;
	
	Them(a, 4, 1);
	cout<< "Node sau khi them phan tu vao sau vi tri "<< 1 << " la:\n";
	in(a);
	cout<< "So luong phan tu cua node la: "<< Size(a) << endl;
	
	Xoa(a, 3);
	cout<<"Node sau khi xoa phan tu o vi tri "<< 3 <<" la:\n";
	in(a);
	cout<< "So luong phan tu cua node la: "<< Size(a) << endl;
	
	if(TonTai(a, 4)){
		cout<< "So " << 4 <<" co ton tai trong node\n";
	}
	else{
		cout<< "So " << 4 <<" khong co ton tai trong node\n";
	}
	
	Huy(a);
	
	return 0;
}
