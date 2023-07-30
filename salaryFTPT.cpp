#include"Personn.cpp"
#include"EmployeePT.cpp"
#include"EmployeeFT.cpp"

int main()
{
	vector<EmployeeFT> ft;
	ft.push_back(EmployeeFT("a", 18, "HN", "09842", "nam", 10, 309200));
	ft.push_back(EmployeeFT("b", 18, "HN", "09842", "nam", 30, 309200));
	ft.push_back(EmployeeFT("c", 18, "HN", "09842", "nam", 30, 309200));
	ft.push_back(EmployeeFT("d", 18, "HN", "09842", "nam", 15, 309200));
	ft.push_back(EmployeeFT("e", 18, "HN", "09842", "nam", 30, 309200));
	vector<EmployeeFT> f(EmployeeFT::getMaxSalary(ft));
	for(int i=0;i<f.size();i++){
		f[i].display();
		cout<<endl;
	}
}
