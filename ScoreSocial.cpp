#include"Score.cpp"

using namespace std;

class ScoreSocial:public Score{
private:
    double ce;
    double geography;
    double history;
public:
    ScoreSocial(){
        
    }
    ScoreSocial(double math,double literature,double english,double ce,double geography,double history):Score(math,literature,english){
        this->ce=ce;
        this->geography=geography;
        this->history=history;
    }
    double getCe(){
        return ce;
    }
    double getGeography(){
        return geography;
    }
    double getHistory(){
        return history;
    }
    double pointC(){
        return literature + history + geography;
    }
    double pointNatural(){
        return literature+geography+history;
    }
    double avgPoint(){
        return (ce+geography+history+math+literature+english)/6;
    }
};
