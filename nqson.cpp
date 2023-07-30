#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	string h;
	getline(cin,h);
	for(int i=0;i<h.size();i++){
		if(h[i]=='#'){
			h.erase(i-1,2);
			i-=2;	
		}
	}
	cout<<h<<endl;
}
