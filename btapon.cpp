#include<iostream>

using namespace std;

void nhapmang(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"] = ";cin>>arr[i];
	}
}

void xuatmang(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int songuyento(int a){
	int dem=0;
	for(int i=2;i<a;i++){
		if(a%i==0){
			dem++;
		}
	}
	if(dem==0) return a;
	else return 0;
}
int max(int arr[],int n){
	if(n==0){
		return 0;
	}
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}

int main(){
	int n,j=0;
	cout<<"Nhap do dai cua day so : ";cin>>n;
	int A[n],B[n];
	nhapmang(A,n);
	xuatmang(A,n);
	for(int i=0;i<n;i++){
		if(songuyento(A[i])) {
			B[j]=A[i];
			j++;
		}
	}
	int maxx=max(B,j);
	if(maxx==0){
		cout<<"Mang khong co so nguyen to!"<<endl;
	}
	else
		cout<<"so nguyen to lon nhat la : "<<max(B,j)<<endl;
}
