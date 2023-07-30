#include<bits/stdc++.h>

using namespace std;

int main(){
	//bai 8
//	string a;cin>>a;
//	for(int i=0;i<a.length();i++){
//		if(isupper(a[i])) a[i]=tolower(a[i]);
//		else a[i]=toupper(a[i]);
//	}
//	cout<<a<<endl;
	
	//bai 12
	string s[100];
	string a;getline(cin,a);
	string tmp="";
	int dem=0;
	for(int i=0;i<=a.length();i++){
		if(!isspace(a[i])&&a[i]!='\0'){
			tmp=tmp+a[i];
			continue;
		}
		s[dem]=tmp;
		tmp="";
		++dem;
	}
	int max=s[0].length();
	for(int i=1;i<dem;i++){
		if(s[i].length()>max) max=s[i].length();
	}
	cout<<"Cac tu co kich thuoc lon nhat la: ";
	for(int i=1;i<dem;i++){
		if(s[i].length()==max) cout<<s[i]<<" ";
	}
}
