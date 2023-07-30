#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,dem=0,TheFirstNumber;
	cin>>n;
	int k=n;
	while(k>0){
		dem++;
		TheFirstNumber=k%10;
		k/=10;
	}
	cout<<"So nguyen "<<n<<" co "<<dem<<" chu so."<<endl;
	cout<<"Chu so dau tien cua "<<n<<" la :"<<TheFirstNumber<<endl;
	return 0;
}
