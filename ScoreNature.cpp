#include"Score.cpp"

using namespace std;

class ScoreNatural:public Score{
private:
    double physic;
    double chemistry;
    double biology;
public:
    ScoreNatural(){
        
    }
    ScoreNatural(double math,double literature,double english,double physic,double chemistry,double biology):Score(math,literature,english){
        this->physic=physic;
        this->chemistry=chemistry;
        this->biology=biology;
    }
    double getPhysic(){
        return physic;
    }
    double getChemistry(){
        return chemistry;
    }
    double getBiology(){
        return biology;
    }
    double pointA(){
        return math + chemistry + physic;
    }
    double pointB(){
        return math+chemistry+biology;
    }
    double pointNatural(){
        return physic+chemistry+biology;
    }
    double avgPoint(){
        return (physic+chemistry+biology+math+literature+english)/6;
    }
};
