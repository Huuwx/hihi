#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int x,int n){
	int r=n-1;
	int l=0;
	while(r>=1){
		int mid=(l+r)/2;
		if(arr[mid]==x) return mid;
		if(arr[mid]<x){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
		return -1;
}

int binarySearch2(int arr[],int x,int r,int l){
	while(r>=1){
		int mid=l+(r-1)/2;
		if(arr[mid]==x) return mid;
		if(arr[mid]<x){
			return binarySearch2(arr,x,r,mid+1);
		}
		else{
			return binarySearch2(arr,x,mid-1,l);
		}
		return -1;
	}
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=2;
	cout<<binarySearch2(arr,x,n-1,0);
}
