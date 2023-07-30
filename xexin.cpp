#include"Transport.cpp"
#include"Car.cpp"

int main(){
	Car a("Ford","Car",2020,400,4,"diesel");
	Car b("Viet Nam","Vinfast",2021,300,6,"diesel");
	Car c("Japan","Honda",2010,300,6,"diesel");
	vector<Car> xe;
	xe.push_back(a);
	xe.push_back(b);
	xe.push_back(c);
	for(int i=0;i<xe.size();i++){
		xe[i].display();
		cout<<endl;
	}
	vector<Car> mp=Car::getCarHaveMaxSpeedBasic(xe);
	cout<<"Car have Max Speed Basic : "<<endl;
	for(int i=0;i<mp.size();i++){
		mp[i].display();
		cout<<endl;
	}
	vector<Car> ms=Car::getCarHaveMaxSeat(xe);
	cout<<"Car have Max Seat : "<<endl;
	for(int i=0;i<ms.size();i++){
		ms[i].display();
		cout<<endl;
	}
}
