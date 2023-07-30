#include"pppoint.cpp"

class Traingle{
private:
    Point A;
    Point B;
    Point C;
public:
    Traingle(){
        
    }
    Traingle(Point A,Point B,Point C){
        this->A=A;
        this->B=B;
        this->C=C;
    }
    double perimeter(){
        return A.distance(B)+A.distance(C)+B.distance(C);
    }
    double area(){
        double p=(A.distance(B)+A.distance(C)+B.distance(C))/2;
        return sqrt(p*(p-A.distance(B))*(p-A.distance(C))*(p-B.distance(C)));
    }
    Point center(){
        return Point(double(A.getX() + B.getX() + C.getX()) / 3, double(A.getY() + B.getY() + C.getY()) / 3);
    }
    bool isTraingle(){
            double a = A.distance(B);
            double b = B.distance(C);
            double c = A.distance(C);
            if (a + b > c && b + c > a && c + a > b){
                return true;
            }
                return false;
        }
};
