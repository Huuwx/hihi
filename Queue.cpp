#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#include<stdlib.h>

using namespace std;

vector<string> res;
vector<long long> ress;
long long ans[101];
//void lietkenp(){
//	queue<string> q;
//	q.push("1");
//	res.push_back("1");
//	while(res.size()<10001){
//		string top=q.front();
//		q.pop();
//		res.push_back(top + "0");
//		res.push_back(top + "1");
//		q.push(top + "0");
//		q.push(top + "1");
//	}
//}

//void boiso09(){
//	queue<string> q;
//	q.push("9");
//	ress.push_back(9);
//	while(1){
//		string top=q.front();
//		q.pop();
//		if(top.length()==12) break;
//		string str=top+"0";
//		ress.push_back(stoll(str));
//		str=top+"9";
//		ress.push_back(stoll(str));
//		q.push(top + "0");
//		q.push(top + "9");
//	}
//	for (int i=1;i<=100;i++){
//	    for(long long x : ress){
//	        if(x%i==0){
//	            ans[i]=x;
//	            break;
//	        }
//	    }
//	}
//}

//void solocphat(){
//	queue<string> q;
//	q.push("6");
//	q.push("8");
//	res.push_back("6");
//	res.push_back("8");
//	while(1){
//		string top=q.front();
//		q.pop();
//		if(top.length()==15) break;
//		res.push_back(top+"6");
//		res.push_back(top+"8");
//		q.push(top+"6");
//		q.push(top+"8");
//	}
//}

int solve(int a,int b){
	queue<pair<int,int>> q;
	set<int> se;
	se.insert(a);
	q.push({a,0});
	while(!q.empty()){
		pair<int,int> top=q.front();q.pop();
		if(top.first==b)return top.second;
		if(top.first *2  == b||top.first -1 ==b) return top.second+1;
		if(se.find(top.first*2)==se.end()&&top.first<b){
			q.push({top.first*2,top.second+1});
			se.insert(top.first*2);
		}
		if(se.find(top.first-1)==se.end()&&top.first>1){
			q.push({top.first-1,top.second+1});
			se.insert(top.first-1);
		}
	}
}
int main(){
// 	lietkenp();
//	boiso09();
//	solocphat();
//	for(int i=1;i<=100;i++){
//	    cout<<i<<" "<<ans[i]<<endl;
//	}
//	int t;cin>>t;
//	while(t--){
//		int n;cin>>n;
//		vector<string> tmp;
//		for(int i=0;i<res.size();i++){
//			if(res[i].length()==n+1) break;
//			tmp.push_back(res[i]);
//		}
//		for(vector<string>::iterator it=tmp.end()-1;it!=tmp.begin()-1;it--){
//			cout<<*it<<" ";
//		}
//		cout<<endl;
//	}
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<solve(a,b);
	}
	
	return 0;
}
