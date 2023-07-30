#include"Food.cpp"
#include"CannedFood.cpp"
#include"NonCFood.cpp"

int main(){
	CannedFood a("Canned fish",15000,9);
	CannedFood b("Canned pork",30000,3);
	CannedFood c("Canned beef",60000,2);
	vector<CannedFood> aa;
	aa.push_back(a);
	aa.push_back(b);
	aa.push_back(c);
	CannedFood::sortNumberBox(aa);
	for(int i=0;i<aa.size();i++){
		aa[i].display();
		cout<<endl;
	}
	
	NonCFood d("kem danh rang",15000,2);
	NonCFood e("Cigarette",30000,0.2);
	NonCFood f("Weed",60000,0.5);
	vector<NonCFood> aaa;
	aaa.push_back(d);
	aaa.push_back(e);
	aaa.push_back(f);
	NonCFood::sortWeight(aaa);
	for(int i=0;i<aaa.size();i++){
		aaa[i].display();
		cout<<endl;
	}
}
