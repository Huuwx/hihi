#include<bits/stdc++.h>
using namespace std;

struct SV{
	string msv;
	string ten;
	double diem;
	SV *next;
};
typedef SV* sv;

sv makeNode(string a, string b, double c){
	sv tmp = new SV();
	tmp->msv = a;
	tmp->ten = b;
	tmp->diem = c;
	tmp->next = NULL;
	return tmp;
}

void input(sv &s, int n){
	for(int i = 1; i <= n; i++){
		string a, b;
		double c;
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin, a);
		cout << "Nhap ten SV: "; getline(cin, b);
		cout << "Diem: "; cin >> c;
		sv tmp = makeNode(a, b, c);
		if(s == NULL){
			s = tmp;
		}
		else{
			sv p = s;
			while(p->next != NULL){
				p = p->next;
			}
			p->next = tmp;
		}
	}
}

void Print(sv s){
	cout << "In danh sach:\n";
	while(s != NULL){
		cout << s->msv << "\t" << s->ten << "\t" << s->diem << endl;
		s = s->next;
	}
}

void add(sv &s, string a, string b, double c){
	sv tmp = makeNode(a, b, c);
	if(s == NULL){
		s = tmp;
	}
	else{
		sv p = s;
		p = p->next;
		tmp->next = p;
		s->next = tmp;
	}
}
int main(){
	int n;
	cout << "Cho so phan tu n = "; cin >> n;
	sv s = NULL;
	input(s, n);
	Print(s);
	cout << "Cho thong tin 1 SV:\n";
	string a, b;
	double c;
	cin.ignore();
	cout << "MaSV: "; getline(cin, a);
	cout << "Ten: "; getline(cin, b);
	cout << "Diem: "; cin >> c;
	if(n > 0) cout << "Hay them x vao vi tri thu 2!\n";
	add(s, a, b ,c);
	Print(s);
}
