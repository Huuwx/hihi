#include<bits/stdc++.h>

using namespace std;

int main(){
	long n,q;
	cin>>n>>q;
	int **bv=new int*[n];
	for(int i=0;i<n;i++){
		bv[i]=new int[n];
	}
	int *soq=new int[q];
	int so=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			bv[i][j]=so;
			so++;
		}
	}
	for(int i=0;i<q;i++){
		cin>>soq[i];
	}
	for(int k=0;k<q;k++)
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(bv[i][j]==soq[k]){
				cout<<bv[j][i]<<" ";
				}
			}
		}
	for(int i=0;i<n;i++){
		delete[]bv[i];
	}
	delete[]bv;
	delete[]soq;
}
