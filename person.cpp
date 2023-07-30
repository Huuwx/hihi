#include<bits/stdc++.h>
#include<string>
#pragma once

using namespace std;

class Person{
private:
	int age;
	string name,address;
public:
	Person(int age,string name,string address){
		this->name=name;
		this->address=address;
		this->age=age;
	}
	void setName(string name){
		this->name=name;
	}
	string getName(){
		cout<<"Name : "<<name<<endl;
	}
	void setAddress(string address){
		this->address=address;
	}
	string getAddress(){
		cout<<"Address : "<<address<<endl;
	}
	void setAge(int age){
		this->age=age;
	}
	string getAge(){
		cout<<"Age : "<<age<<endl;
	}
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Address : "<<address<<endl;
	}
};
