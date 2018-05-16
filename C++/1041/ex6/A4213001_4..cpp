#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	int a,b,c=0;
	int total[13]={};
	double e[13]={0,0,2.778,5.556,8.333,11.111,13.889,16.667,13.889,11.111,8.333,5.556,2.778};
	for(int q=1;q<=36000;q++){
		a=rand()%6+1;
		b=rand()%6+1;
		c=a+b;
		total[c]++;
	}
	cout<<"Sum   Total    Expected    Actual"<<endl;
	for(int w=2;w<=12;w++){
		cout<<setw(3)<<w<<"   "<<setw(5)<<total[w]<<"   "<<setw(8)<<e[w]<<"%   "<<setw(6)<<fixed<<setprecision(3)<<total[w]/360.000<<"%"<<endl;
	}
}
