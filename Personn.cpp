#include<bits/stdc++.h>
#include<vector>
#pragma once

using namespace std;

class Person{
private:
    string name;
    int age;
    string add;
    string tel;
    string sex;
public:
    Person(){
        
    }
    Person(string name,int age,string add,string tel,string sex){
        this->name=name;
        this->age=age;
        this->add=add;
        this->tel=tel;
        this->sex=sex;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getAdd(){
        return add;
    }
    string getTel(){
        return tel;
    }
    string getSex(){
        return sex;
    }
    virtual void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Sex: "<<sex<<endl;
        cout<<"Add: "<<add<<endl;
        cout<<"Tel: "<<tel<<endl;
    }
    virtual long salary()=0;
    static vector<Person*> findPerson(vector<Person*> p){
        vector<Person*> hn;
        for(int i=0;i<p.size();i++){
            if(p[i]->add=="HN") hn.push_back(p[i]);
        }
        return hn;
    }
};
