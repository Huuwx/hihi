#include<bits/stdc++.h>
using namespace std;

struct DS{
	int data;
	DS *next;
};
typedef DS* ds;

ds makeNode(int x){
	ds tmp = new DS();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

void ThemCuoi(ds &t, int x){
	ds tmp = makeNode(x);
	if(t == NULL) t = tmp;
	else{
		ds p = t;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = tmp;
	}
}

void ThemDau(ds &t, int x){
	ds tmp = makeNode(x);
	if(t == NULL) t = tmp;
	else{
		tmp->next = t;
		t = tmp;
	}
}

void Xoa(ds &t){
	if(t == NULL) t = t->next;
	else{
		ds truoc = NULL, sau = t;
		while(sau->next != NULL){
			truoc = sau;
			sau = sau->next;
		}
		if(truoc == NULL){
			t = t->next;
		}
		else{
			truoc->next = sau->next;
		}
	}
}
void Print(ds t){
	cout << "In danh sach:";
	while(t != NULL){
		cout << " " << t->data;
		t = t->next;
	}
	cout << endl;
}

void PrintChan(ds t){
	cout << "In so chan trong danh sach:";
	while(t != NULL){
		if(t->data % 2 == 0){
			cout << " " << t->data;
		}
		t = t->next;
	}
	cout << endl;
}

void XD(ds &t, int arr[], int n){
	for(int i = 0; i < n; i++){
		ThemCuoi(t, arr[i]);
	}
}
int main(){
	int n;
	do{
		cout << "Cho n = "; cin >> n;
	}while(n < 5);
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "Nhap phan tu: "; cin >> arr[i];
	}
	ds t = NULL;
	XD(t, arr, n);
	Print(t);
	cout << "Hay xoa phan tu o cuoi danh sach!\n";
	Xoa(t);
	Print(t);
	int x; 
	cout << "Cho x = "; cin >> x;
	ThemDau(t, x);
	cout << "Hay them x vao dau danh sach!\n";
	Print(t);
	PrintChan(t);
}
