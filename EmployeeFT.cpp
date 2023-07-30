#include"Personn.cpp"


class EmployeeFT:public Person{
private:
 int day;
 long money;
public:
    EmployeeFT(){
        
    }
    EmployeeFT(string name,int age,string add,string tel,string sex,int day,long money):Person(name,age,add,tel,sex){
        this->day=day;
        this->money=money;
    }
    int getDay(){
        return day;
    }
    long getMoney(){
        return money;
    }
    long salary(){
        return day*money;
    }
    void display(){
        cout<<"Employee Full Time"<<endl;
        Person::display();
        cout<<"Day: "<<day<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Salary: "<<salary()<<endl;
    }
    static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> ft){
        vector<EmployeeFT> ms;
        long max=0;
        for(int i=0;i<ft.size();i++){
            if(ft[i].salary()>max) max=ft[i].salary();
        }
        for(int i=0;i<ft.size();i++){
            if(ft[i].salary()==max) ms.push_back(ft[i]);
        }
        return ms;
    }
    
};
