#include<bits/stdc++.h>
#pragma once

using namespace std;

class Point{
public:
    int x;
    int y;
    Point(){
        
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    void setX(int x){
        this->x=x;
    }
    int getX(){
        return x;
    }
    void setY(int y){
        this->y=y;
    }
    int getY(){
        return y;
    }
    friend Point operator-(Point A,Point B){
        return Point(A.x-B.x,A.y-B.y);
    }
    double distance(Point B){
        return sqrt((this->x-B.x)*(this->x-B.x)+(this->y-B.y)*(this->y-B.y));
    }
    void display(){
        cout<<"X = "<<x<<"Y = "<<y<<endl;
    }
};
