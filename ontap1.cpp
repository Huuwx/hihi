#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << "So thu " << i << ": "; cin >> arr[i];
	}
	cout << endl;
}

void Print(int arr[], int n){
	cout << "Day so:";
	for(int i = 0; i < n; i++){
		cout << " " << arr[i];
	}
	cout << endl << endl;
}

void ReversePrint(int arr[], int n){
	cout << "Dao nguoc day so:";
	for (int i = n - 1; i >= 0; i--){
		cout << " " << arr[i];
	}
	cout << endl;
}

int sochia3(int arr[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 3 == 0) dem++;
	}
	return dem;
}

bool cp(int n){
	int sqr = sqrt(n);
	if(sqr * sqr == n) return true;
	return false;
}

int demsocp(int arr[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(cp(arr[i])) dem++;
	}
	return dem;
}
int main(){
	int n; 
	cout << "Nhap n = "; cin >> n;
	int arr[n];
	input(arr, n);
	Print(arr, n);
	ReversePrint(arr, n);
	cout << "Day co " << sochia3(arr, n) << " so chia het cho 3.\n";
	cout << "Day co " << demsocp(arr, n) << " so chinh phuong.";
}
