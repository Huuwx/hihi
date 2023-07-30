#include"Personn.cpp"


class EmployeePT:public Person{
private:
 int hour;
 long money;
public:
    EmployeePT():Person(){
        
    }
    EmployeePT(string name,int age,string add,string tel,string sex,int hour,long money):Person(name,age,add,tel,sex){
        this->hour=hour;
        this->money=money;
    }
    int getHour(){
        return hour;
    }
    long getMoney(){
        return money;
    }
    long salary(){
        return hour*money;
    }
    void display(){
        cout<<"Employee Part Time"<<endl;
        Person::display();
        cout<<"Hour: "<<hour<<endl;
        cout<<"Money: "<<money<<endl;
        cout<<"Salary: "<<salary()<<endl;
    }
    static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt){
        vector<EmployeePT> ms;
        long max=0;
        for(int i=0;i<pt.size();i++){
            if(pt[i].salary()>max) max=pt[i].salary();
        }
        for(int i=0;i<pt.size();i++){
            if(pt[i].salary()==max) ms.push_back(pt[i]);
        }
        return ms;
    }
    
};
