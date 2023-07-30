#include<bits/stdc++.h>

using namespace std;

int main(){
	int d,m,y;
	cin>>d>>m>>y;
	if(d>31){
		cout<<"Input is false!"<<endl;
		return 0;
	}
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		{
			if(d<31){
				d++;
			}
			if(d==31){
				if(m==12){
					d=1;
					m=1;
					y++;
				}
				else{
					d=1;
					m++;
				}
			}
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
		{
			if(m<30){
				d++;
			}
			else{
				d=1;
				m++;
			}
			break;
		}
		case 2:
		{
			if(d==28){
			d=1;
			m++;
		}
			else{
				d++;
			}
			break;	
		}
		default:
		{
			cout<<"Input is false!"<<endl;
			return 0;
		}
	}
	cout<<d<<'/'<<m<<'/'<<y;
}
