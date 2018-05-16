#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(0));
	int a,b,c;
	int pok[52]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,
	25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
	for(int q=1;q<=52;q++){
		a=rand()%52;
		b=rand()%52;
		c=pok[b];
		pok[b]=pok[a];
		pok[a]=c;
	}
	cout<<" Num Card Num Card Num Card Num Card"<<endl;;
	for(int w=0;w<52;w++){
		if(w>0&&w%4==0){
			cout<<endl;
		}
		cout<<setw(4)<<w+1;
		if((-1+pok[w])/13==0){
			if(pok[w]==1)
				cout<<setw(4)<<static_cast<char>(3)<<"A";
			else if(pok[w]<10&&pok[w]>1)
				cout<<setw(4)<<static_cast<char>(3)<<pok[w];
			else if(pok[w]==10)
				cout<<setw(4)<<static_cast<char>(3)<<"T";
			else if(pok[w]==11)
				cout<<setw(4)<<static_cast<char>(3)<<"J";
			else if(pok[w]==12)
				cout<<setw(4)<<static_cast<char>(3)<<"Q";
			else if(pok[w]==13)
				cout<<setw(4)<<static_cast<char>(3)<<"K";
		}
		else if((-1+pok[w])/13==1){
			if(pok[w]-13==1)
				cout<<setw(4)<<static_cast<char>(4)<<"A";
			else if(pok[w]-13<10&&pok[w]-13>1)
				cout<<setw(4)<<static_cast<char>(4)<<pok[w]-13;
			else if(pok[w]-13==10)
				cout<<setw(4)<<static_cast<char>(4)<<"T";
			else if(pok[w]-13==11)
				cout<<setw(4)<<static_cast<char>(4)<<"J";
			else if(pok[w]-13==12)
				cout<<setw(4)<<static_cast<char>(4)<<"Q";
			else if(pok[w]-13==13)
				cout<<setw(4)<<static_cast<char>(4)<<"K";
		}
		else if((-1+pok[w])/13==2){
			if(pok[w]-26==1)
				cout<<setw(4)<<static_cast<char>(5)<<"A";
			else if(pok[w]-26<10&&pok[w]-26>1)
				cout<<setw(4)<<static_cast<char>(5)<<pok[w]-26;
			else if(pok[w]-26==10)
				cout<<setw(4)<<static_cast<char>(5)<<"T";
			else if(pok[w]-26==11)
				cout<<setw(4)<<static_cast<char>(5)<<"J";
			else if(pok[w]-26==12)
				cout<<setw(4)<<static_cast<char>(5)<<"Q";
			else if(pok[w]-26==13)
				cout<<setw(4)<<static_cast<char>(5)<<"K";
		}
		else if((-1+pok[w])/13==3){
			if(pok[w]-39==1)
				cout<<setw(4)<<static_cast<char>(6)<<"A";
			else if(pok[w]-39<10&&pok[w]-39>1)
				cout<<setw(4)<<static_cast<char>(6)<<pok[w]-39;
			else if(pok[w]-39==10)
				cout<<setw(4)<<static_cast<char>(6)<<"T";
			else if(pok[w]-39==11)
				cout<<setw(4)<<static_cast<char>(6)<<"J";
			else if(pok[w]-39==12)
				cout<<setw(4)<<static_cast<char>(6)<<"Q";
			else if(pok[w]-39==13)
				cout<<setw(4)<<static_cast<char>(6)<<"K";
		}
	}
}
