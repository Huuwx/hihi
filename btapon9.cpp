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
void xuatmangcon(int arr[],int n){
	int solap[n];
	int k=0;
	for(int i=0;i<n;i++){
		k=0;
		cout<<arr[i]<<" ";
		solap[k]=arr[i];
		k++;
		for(int j=i+1;j<n;j++){
			for(int h=0;h<k;h++){
				if(solap[h]==arr[j]) {
					break;
				}
				else{
					cout<<arr[j]<<" ";
					solap[k]=arr[j];
					k++;
				}
				
			}
		}
		cout<<endl;
	}
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

int sotapcontongngto(int arr[],int n){
	int solap[n];
	int dem=0,k=0;
	for(int i=0;i<n;i++){
		k=0;
		int sum=0;
		sum+=arr[i];
		solap[k]=arr[i];
		k++;
		for(int j=i+1;j<n;j++){
			for(int h=0;h<k;h++){
				if(solap[h]!=arr[j]) sum+=arr[j];
			}
		}
		if(songuyento(sum)){
			dem++;
		}
	}
	return dem;
}

int main(){
	int n;
	cout<<"Nhap do dai day so : ";cin>>n;
	int A[n];
	nhapmang(A,n);
	xuatmang(A,n);
	cout<<endl;
	xuatmangcon(A,n);
	cout<<"so tap con khong rong co tong la so nguyen to : "<<sotapcontongngto(A,n)<<endl;
}
