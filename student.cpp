#include"person.cpp"

class Student:Person{
private:
	double Gpa;
public:
	Student(int age,string name,string address,double Gpa):Person(age,name,address){
		this->Gpa=Gpa;
	}
	void setGpa(double Gpa){
		this->Gpa=Gpa;
	}
	int getGpa(){
		cout<<"Gpa : "<<Gpa<<endl;
	}
	void display(){
		Person::display();
		cout<<"Gpa : "<<Gpa<<endl;
	}
};
