#include<bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	string a;
	cin>>a;
	int dem=0;
	for(char k='a';k<='z';k++){
		for(int i=0;i<a.size();i++){
			if(a[i]==k){
				dem=0;
				for(int j=a.size()-1;j>=i;j--){
					if(a[j]==a[i]){
						dem++;
					}
				}
				cout<<'('<<a[i]<<'^'<<dem<<')';
				for(int j=a.size()-1;j>i;j--){
					if(a[j]==a[i]){
						a.erase(j,1);
					}
				}
			}
		}
	}
}
