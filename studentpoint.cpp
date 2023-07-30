#include<bits/stdc++.h>
#include<vector> 

using namespace std;

class Student{
private:
    string name;
    double math;
    double physic;
    double chemistry;
public:
    Student(){
        
    }
    Student(string name,double math,double physic,double chemistry){
        this->name=name;
        this->math=math;
        this->physic=physic;
        this->chemistry=chemistry;
    }
    double getMath(){
        return math;
    }
    double getPhysic(){
        return physic;
    }
    double getChemistry(){
        return chemistry;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Point math: "<<math<<endl;
        cout<<"Point physic: "<<physic<<endl;
        cout<<"Point chemistry: "<<chemistry<<endl;
        cout<<"Average: "<<avgPoint();
    }
    double avgPoint(){
        double avg=(math+physic+chemistry)/3;
        return avg;
    }
    static vector<Student> getStudentMaxAvg(vector<Student> vt){
        vector<Student>ma;
        double max=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].avgPoint()>max){
                max=vt[i].avgPoint();
            }
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].avgPoint()==max){
                ma.push_back(vt[i]);
            }
        }
        return ma;
    }
    static vector<Student> getStudentMaxMath(vector<Student> vt){
        vector<Student>ma;
        double max=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].getMath()>max){
                max=vt[i].getMath();
            }
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].getMath()==max){
                ma.push_back(vt[i]);
            }
        }
        return ma;
    }
    static vector<Student> getStudentMaxPhysic(vector<Student> vt){
        vector<Student>ma;
        double max=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].getPhysic()>max){
                max=vt[i].getPhysic();
            }
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].getPhysic()==max){
                ma.push_back(vt[i]);
            }
        }
        return ma;
    }
    static vector<Student> getStudentMaxChemistry(vector<Student> vt){
        vector<Student>ma;
        double max=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].getChemistry()>max){
                max=vt[i].getChemistry();
            }
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].getChemistry()==max){
                ma.push_back(vt[i]);
            }
        }
        return ma;
    }
};

int main(){
	vector<Student> student;
	Student a("Huu",6,7,8);
	Student b("Huuwx",8,9,10);
	Student c("Hiu Hiu",8,9,10);
	Student d("Mi",6,10,5);
	student.push_back(a);
	student.push_back(b);
	student.push_back(c);
	student.push_back(d);
	vector<Student> max =Student::getStudentMaxChemistry(student);
	cout<<"student get max point of chemistry: "<<endl;
	for(int i=0;i<max.size();i++){
    	max[i].display();
    	cout<<endl;
	}
}
