#include<bits/stdc++.h>
using namespace std;

struct SV{
	string msv;
	string hoten;
	double diem;
};

void input(SV arr[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin, arr[i].msv);
		cout << "Nhap Ten SV: "; getline(cin, arr[i].hoten);
		cout << "Nhap Diem: "; cin >> arr[i].diem;
	}
}

void swap(SV *a, SV *b){
	SV tmp = *a;
	*a = *b;
	*b = tmp;
}

void sapxep(SV arr[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j].diem < arr[i].diem) swap(arr[i], arr[j]);
		}
	}
}

void Print(SV arr[], int n){
	cout << "Danh sach Sinh vien:";
	for (int i = 0; i < n; i++){
		cout << endl;
		cout << arr[i].msv << "\t" << arr[i].hoten << "\t" << arr[i].diem;
	}
}
int main(){
	int n;
	cout << "Nhap so sinh vien n = "; cin >> n;
	SV arr[n];
	input(arr, n);
	sapxep(arr, n);
	Print(arr, n);
}
