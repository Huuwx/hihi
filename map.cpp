#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
//	int n; cin >> n;
//	map<int, int> mp;
//	int a[1000];
//	for (int i = 0; i < n; i++){
//		cin >> a[i];
//		mp[a[i]]++;
//	}
////	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
////		cout << (*it).first << " " << (*it).second << endl;
////	}
//	for(int i = 0; i < n; i++){
//		if (mp[a[i]] != 0){
//			cout << a[i] << " " << mp[a[i]] << endl;
//			mp[a[i]] = 0;
//		}
//	}
	
	int n; cin >> n;
	map<string, int> mp;
	for (int i = 0; i < n; i++){
		string x; cin >> x;
		mp[x]++;
	}
	int max_fre = 0;
	string res;
	for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
		if((*it).second >= max_fre){
			max_fre = (*it).second;
			res = (*it).first;
		}
	}
	cout << res << " " << max_fre << endl;
}
