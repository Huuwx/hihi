#include"Food.cpp"

class NonCFood:public Food{
private:
    double weight;
public:
    NonCFood(){
        
    }
    NonCFood(string name,double price,double weight):Food(name,price){
        this->weight=weight;
    }
    void setWeight(double weight){
        this->weight=weight;
    }
    double getWeight(){
        return weight;
    }
    void display(){
        Food::display();
        cout<<"Weight: "<<weight<<endl;
    }
    static void sortWeight(vector<NonCFood> &vt){
        for(int i=0;i<vt.size()-1;i++){
            for(int j=i+1;j<vt.size();j++){
                if(vt[i].getWeight()>vt[j].getWeight()) swap(vt[i],vt[j]);
            }
        }
    }
};
