#include"Food.cpp"

class CannedFood:public Food{
private:
    int numberBox;
public:
    CannedFood(){
        
    }
    CannedFood(string name,double price,int numberBox):Food(name,price){
        this->numberBox=numberBox;
    }
    int getNumberBox(){
        return numberBox;
    }
    void display(){
        Food::display();
        cout<<"Number box: "<<numberBox<<endl;
    }
    static void sortNumberBox(vector<CannedFood>& vt){
        for(int i=0;i<vt.size()-1;i++){
            for(int j=i+1;j<vt.size();j++){
                if(vt[i].getNumberBox()>vt[j].getNumberBox()) swap(vt[i],vt[j]);
            }
        }
    }
};
