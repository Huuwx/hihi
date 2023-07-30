#include<bits/stdc++.h>

using namespace std;

int findMax(int a,int b,int c){
	int max=a;
	if(b>max) max=b;
	if(c>max) max=c;
	return max;
}

int main(){
	int a,b,c,dem=0;
	cin>>a>>b>>c;
	int max=findMax(a,b,c);
	if(a==max) dem++;
	if(b==max) dem++;
	if(c==max) dem++;
	if(dem==2){
		if(a!=max) cout<<a<<endl;
		if(b!=max) cout<<b<<endl;
		if(c!=max) cout<<c<<endl;
		return 0;
	}
	cout<<max<<endl;
	return 0;
}
