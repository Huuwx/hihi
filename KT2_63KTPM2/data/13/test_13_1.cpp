#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void nhap(int a[], int &n)
{
	do{
		cout<<"Nhap n = "; cin>>n;
	}while (n<=0||n>100);
	
	for(int i=0;i<n;i++) 
		{
    		cout<<"So thu "<<i+1<<": ";
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
void MaxMin(int a[], int n)
{
    int max = a[0], min  = a[0];
	for(int i = 0; i < n; i++)
	{
		if(max<a[i]) max = a[i];
		if(min>a[i]) min = a[i];
	}
    cout<<"\nSo max = "<<max<<", so min = "<<min;
}
int ktnt(int n)
{
	if(n<=1)
		return 0;
	else
		for(int k = 2; k<n-1; k++)
			if(n%k ==0)
				return 0;
	return 1;
}
void Tinh(int a[], int n)
{
	int nt = 0, tong = 0; 
	for(int i = 0; i < n; i++)
	{
		if(ktnt(a[i])==1)	nt++;
		tong +=a[i];
	}
	cout<<"\nDay co "<<nt<<" so nguyen to.";
	cout<<"\nTBC day so: "<<tong*1.0/n;
}
int main() {
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	int n, A[100];
	nhap(A,n); 
	xuat(A,n);
	MaxMin(A,n);
	Tinh(A,n);
  	return 0;
}

