#include"Transport.cpp"
#include<vector>
#pragma once

class Car:public Transport{
private:
    int numberSeat;
    string engineType;
public:
    Car(){
        
    }
    Car(string manufacturer,string name,int year,int speed,int numberSeat,string engineType):Transport(manufacturer,name,year,speed){
        this->numberSeat=numberSeat;
        this->engineType=engineType;
    }
    int getNumberSeat(){
        return numberSeat;
    }
    string getEngineType(){
        return engineType;
    }
    double getSpeedBasic(){
        return getSpeed()/numberSeat;
    }
    void display(){
        Transport::display();
        cout<<"Number Seat: "<<numberSeat<<endl;
        cout<<"Engine Type: "<<engineType<<endl;
        cout<<"Speed Basic: "<<getSpeedBasic()<<endl;
    }
    static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt){
        vector<Car> mp;
        double maxsp=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].getSpeedBasic()>maxsp) maxsp=vt[i].getSpeedBasic();
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].getSpeedBasic()==maxsp) mp.push_back(vt[i]);
        }
        return mp;
    }
    static vector<Car> getCarHaveMaxSeat(vector<Car> vt){
        vector<Car> ms;
        double maxs=0;
        for(int i=0;i<vt.size();i++){
            if(vt[i].getNumberSeat()>maxs) maxs=vt[i].getNumberSeat();
        }
        for(int i=0;i<vt.size();i++){
            if(vt[i].getNumberSeat()==maxs) ms.push_back(vt[i]);
        }
        return ms;
    }
};
