#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

vector<int> sonp(vector<int> &rs, int n){
	stack<int> s;
	while(n != 0){
		int k = n % 2;
		s.push(k);
		n/=2;
	}
	while(!s.empty()){
		rs.push_back(s.top());
		s.pop();
	}
	return rs;
} 

bool kiemtrangoac(string s){
	stack<char> st;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '(') st.push(s[i]);
		else{
			if(st.empty()) return false;
			else st.pop();
		}
	}
	if(st.empty()) return true;
	else return false;
}

void ptulonhon1(int arr[] ,int n){
	for(int i = 0; i < n; i++){
		int res = -1;
		for (int j = i + 1;j < n; j++){
			if(arr[j] > arr[i]) {
				res = arr[j];
				break;
			}
		}
		cout << res << " ";
	}
	cout << endl;
}

int main(){
//	vector<int> rs;
//	int n; cin>>n;
//	rs = sonp(rs,n);
//	for(int i = 0; i < rs.size(); i++){
//		cout<<rs[i];
//	}
//	cout<<endl;

//	string s; cin >> s;
//	if(kiemtrangoac(s)) cout << "VALID\n";
//	else cout << "INVALID\n";

	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	ptulonhon1(arr,n);
	return 0;
}
