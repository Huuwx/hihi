#include<bits/stdc++.h>

using namespace std;

void coso16(int n){
	int k=n;
	char result[100];
	int dem=0;
	while(k>0){
		int du=k%16;
		if(du>=10){
			result[dem]=(char)(du+55);
			dem++;
		}
		else{
			result[dem]=(char)(du+48);
			dem++;
		}
		k/=16;
	}
	for (int i = dem - 1; i >= 0; i--) {
        cout<<result[i];
    }
    cout<<endl;
}
void coso2(int n){
	int k=n;
	char result[100];
	int dem=0;
	while(k>0){
		int du=k%2;
		result[dem]=(char)(du+48);
		dem++;
		k/=2;
	}
	for (int i = dem - 1; i >= 0; i--) {
        cout<<result[i];
    }
    cout<<endl;
}
void coso8(int n){
	int k=n;
	int result[100];
	int dem=0;
	while(k>0){
		int du=k%8;
		result[dem]=du;
		dem++;
		k/=8;
	}
	for (int i = dem - 1; i >= 0; i--) {
        cout<<result[i];
    }
    cout<<endl;
}

int main(){
	coso16(923);
	coso2(12);
	coso8(2764);
	return 0;
}
