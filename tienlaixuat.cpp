#include<bits/stdc++.h>

using namespace std;

double laixuat(long double &goc,double nam){
	for(int i=1;i<=nam;i++){
		goc+=(goc*(5.1/100));
	}
	return goc;
}

int main(){
	long double goc=10;
//	laixuat(goc,10);
//	cout<<laixuat(goc,10)<<endl;
	int dem=0;
	while(goc<50){
		goc+=(goc*(5.1/100));
		dem++;
		cout<<goc<<endl;
	}
	cout<<"Sau "<<dem<<" nam thi ban se co "<<goc<<" trieu dong."<<endl;
}
