#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<int>::iterator it;
//vector<string>::iterator it;

void vectorInput(vector<int> &v,int n){
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
}

void vectorInput(vector<string> &v,int n){
	string a;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
}

void Printvector(vector<int> v){
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void Printvector(vector<string> v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int sumofvector(vector<int> v){
	int sum=0;
	for(it=v.begin();it!=v.end();it++){
		sum+=*it;
	}
	return sum;
}

void sapxeptang(vector<int> &v){
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				int temp=v[i];
				v[i]=v[j];
				v[j]=temp;
			}
		}
	}
}

int maxProductofAdjacentElements(vector<int> v){
	int max=v[0]*v[1];
	for(int i=1;i<v.size()-1;i++){
		if(v[i]*v[i+1]>max) max=v[i]*v[i+1];
	}
	return max;
}

int maxProductof2Elements(vector<int> v){
	int max=v[0]*v[1];
	int somax[2];
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]*v[j]>max){
				max=v[i]*v[j];
				somax[0]=v[i];
				somax[1]=v[j];
			}
		}
	}
	cout<<"2 so co tich lon nhat la : "<<somax[0]<<','<<somax[1]<<endl;
	return max;
}

vector<string> findLongestStrings(vector<string> v){
	int max=0;
	vector<string> results;
	for(int i=0;i<v.size();i++){
		if(max<v[i].size()){
			max=v[i].size();
		}
	}
	for(int i=0;i<v.size();i++){
		if(max==v[i].size()){
			results.push_back(v[i]);
		}
	}
	return results;
}

vector<int> RemoveElements(vector<int> &v,int l,int r){
	v.erase(v.begin()+l,v.begin()+r+1);
	return v;
}
int SumOfFirstElementAndLastElement(vector<int> v){
	return v.front()+v.back();
}
int main(){
	vector<string> v;
	vector<int> s;
	int n,l,r;
	cout<<"Nhap so phan tu : ";cin>>n;
	cout<<"Nhap phan tu : "<<endl;
	vectorInput(s,n);
	cout<<"Nhap stt xoa : ";cin>>l>>r;
	RemoveElements(s,l,r);
	
	Printvector(s);
//	v.push_back("hello");
//	v.push_back(" cc");
//	cout<<endl;
//	cout<<"tong cua cac so la : "<<sumofvector(s)<<endl;
//	sapxeptang(s);
//	Printvector(s);
//	cout<<"tich lon nhat cua 2 so lien ke la : "<<maxProductofAdjacentElements(s)<<endl;
//	cout<<"tich lon nhat cua 2 so la : "<<maxProductof2Elements(s)<<endl;
//	cout<<"Longest strings in vector : ";
//	Printvector(findLongestStrings(v));
//	cout<<"Sum of first element and last element : "<<SumOfFirstElementAndLastElement(s)<<endl;
}

