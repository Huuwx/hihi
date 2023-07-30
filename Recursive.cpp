#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
	if(n==1) return 1;
	return n*factorial(n-1);
}

int sumOfArray(int a[],int n){
	if(n==1) return a[0];
	return a[n-1]+sumOfArray(a,n-1);
}

int Dfs(int n){
	for(int i=0;i<6;i++){
		for(int j=0;j<10;j++){
			return dfs(i);
		}
	}
}
int main(){
//	int arr[100];
//	int n=3;
//	for(int i=0;i<n;i++){
//		arr[i]=i+1;
//	}
//	cout<<sumOfArray(arr,n)<<endl;
	cout<<Dfs(6);
	return 0;
}
