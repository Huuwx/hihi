#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	cin>>n;
	for(char i='a';i<='z';i++){
		int dem=0;
		for(char j=i;j<='z';j++)
			if(j=i){
				dem++;
			}
		if(dem>0){
			cout<<'('<<i<<'^'<<dem<<')';
		}
	}
}

