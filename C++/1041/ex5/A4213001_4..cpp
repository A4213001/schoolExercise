#include<iostream>
#include<iomanip>
using namespace std;

int ryear(int a);

int main(){
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int rday[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	char mouth[75]={"JanuaryFebruaryMarchAprilMayJuneJulyAugustSeptemberOctoberNovemberDecember"};
	int as[13]={0,7,15,20,25,28,32,36,42,51,58,66,74};
	int d[12]={5,1,1,4,6,2,4,0,3,5,1,3};
	int a,b,c=0,t=0;
	cout<<"請輸入年分(1990-2040):";
	cin>>a;
	while(a<1990||a>2040){
		cout<<"超出範圍，請重新輸入(1990-2040):";
		cin>>a;
	}
	
	for(int y=1;y<=a;y++){
		if(ryear(y)){
			c++;
		}
	}
	if(ryear(a)){
		c--;
	} 
	
	for(int q=0;q<12;q++){
		t=0;
		if(ryear(a)){
			if(q==0||q==1){
				b=(a-2000+c+d[q])%7;
			}
			else{
				b=(a-2000+c+d[q]+1)%7;
			}
		}
		else{
			b=(a-2000+c+d[q])%7;
		}
		for(int e=as[q];e<as[q+1];e++){
			cout<<mouth[e];
		}
		
		cout<<"  "<<a<<"\nSun\tMon\tTue\tWed\tThu\tFri\tsat\n";
		
		for(int e=1;e<=b;e++){
			cout<<"\t";
			t=(t+1)%7;
			if(t%7==0){
				cout<<endl;
			}
		}
		if(ryear(a)){
				for(int w=1;w<rday[q]+1;w++){
				cout<<setw(3)<<w<<"\t";
				t=(t+1)%7;
				if(t%7==0){
					cout<<endl;
				}
			}
		}
			
		else{
			for(int w=1;w<day[q]+1;w++){
				cout<<setw(3)<<w<<"\t";
				t=(t+1)%7; 
				if(t%7==0){
					cout<<endl;
				}
			}
		}
		cout<<"\n\n";
	}
}

int ryear(int a){
	if(a%400==0||a%4==0&&a%100!=0){
		return 1;
	}
	else{
		return 0;
	}
}
