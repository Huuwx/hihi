#include<bits/stdc++.h>
#include<vector>
#include<set>

using namespace std;

int aramic(std::vector<std::string> words)
{
    set<string> s;
    for(int i=0;i<words.size();i++){
        string str = words[i];
        set<char> ch;
        for(int j=0;j<str.length();j++){
            ch.insert(str[j]);
        }
        string s1(ch.begin(),ch.end());
        cout<<s1<<endl;
        s.insert(s1);
    }
    return s.size();
}

int main(){
	vector<string> words;
	words.push_back("bac");
	words.push_back("bca");
	words.push_back("bbb");
	words.push_back("bcb");
	cout<<aramic(words);
}
