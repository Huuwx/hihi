#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void nhap(int a[], int &n)
{
	do{
		cout<<"So phan tu n = "; cin>>n;
	}while (n<=0||n>=20);
	
	for(int i=0;i<n;i++) 
		{
    		cout<<"Phan tu thu "<<i+1<<": ";
			cin>>a[i];
  		}
}
void xuat(int a[], int n)
{
	cout<<"\nIn day so:";
	for(int i=0;i<n;i++)
		cout<<" "<<a[i];
	cout<<endl;
}
int Max(int a[], int n)
{
    int max = a[0];
	for(int i = 0; i < n; i++)
    	if(a[i]>max) max = a[i];
    return max;
}
int CP_max(int a[], int n)
{
	int cp_max = -1; 
	for(int i = 0; i < n; i++)
		if(sqrt(a[i])==floor(sqrt(a[i])) && cp_max<a[i])
			cp_max = a[i];
	return cp_max;
}
int main() {
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	int n, A[100];
	nhap(A,n); 
	xuat(A,n);
	cout<<"\nSo max = "<<Max(A,n);
	cout<<"\nSo chinh phuong lon nhat: "<<CP_max(A,n);
	return 0;
}

