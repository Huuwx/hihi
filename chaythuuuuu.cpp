#include"pppoint.cpp"
#include "tttamggiac.cpp"

int main(){
	Point a(1,-2);
	Point b(2,1);
	Point c(-1,4);
    Traingle A(a,b,c);
    if (A.isTraingle()){
        cout<<"Chu vi tam giac "<<A.perimeter()<<endl;
        cout<<"Dien tich tam giac "<< A.area();
        cout << "\nTam cua Tam giac: "; A.center().display();
    } else cout << "False" << endl;
    
}
