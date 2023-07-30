#include<bits/stdc++.h>

using namespace std;

int t[4]={0,0,0,0};
void tientra(long long n,int arr[]){
	while(n>0){
		if(n>=500000){
			n-=500000;
			t[0]++;
		}
		else if(n>=200000){
			n-=200000;
			t[1]++;
		}
		else if(n>=100000){
			n-=100000;
			t[2]++;
		}
		else{
			n-=50000;
			t[3]++;
		}
	}
}

int main(){
	long long n;cin>>n;
	tientra(n,t);
	cout<<"So to tien 500000 phai tra la: "<<t[0]<<endl;
	cout<<"So to tien 200000 phai tra la: "<<t[1]<<endl;
	cout<<"So to tien 100000 phai tra la: "<<t[2]<<endl;
	cout<<"So to tien 50000 phai tra la: "<<t[3]<<endl;
}
