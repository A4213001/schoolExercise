#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int d1,d2,d3,d4;//4Ω浑跑计 
	
	srand(time(0));//睹计贺 
	
	for(int q=1;q<=5;q++){  //狡5Ω 
	    d1=1+rand()%6;   
	    d2=1+rand()%6;   //4Ω耏浑 
	    d3=1+rand()%6;
		d4=1+rand()%6;
	
		cout<<d1<<"   "<<d2<<"   "<<d3<<"   "<<d4<<"   ";
	
		if(d1==d2&&d1==d3&&d1==d4){
			cout<<"だ计= "<<"100";  //4浑翴计 だ计100 
		}
		else if(d1==d2&&d1==d3){  
			cout<<"礚だ计";
		}
		else if(d1==d2&&d1==d4){
			cout<<"礚だ计";
		}                           //3浑翴计  礚だ计 
		else if(d1==d3&&d1==d4){
			cout<<"礚だ计";
		}
		else if(d2==d3&&d3==d4){
			cout<<"礚だ计";
		}
		else if(d1==d2||d1==d3||d1==d4||d2==d3||d2==d4||d3==d4){    //ぶ2浑翴计 
			if(d1==d2&&d3==d4){    //讽2繷翴计2浑翴计ゑ耕娩だ计=*2(眖37︽102︽祘Α絏) 
				if(d1>d3){
					cout<<"だ计= "<<d1*2;    
				}
				else{
					cout<<"だ计= "<<d3*2;
				}
			}
			else if(d1==d2&&d3!=d4){
				cout<<"だ计= "<<d3+d4;
			}
			else if(d1==d3&&d2==d4){
				if(d1>d2){
					cout<<"だ计= "<<d1*2;
				}
				else{
					cout<<"だ计= "<<d2*2;
				}
			}
			else if(d1==d3&&d2!=d4){
				cout<<"だ计= "<<d2+d4;
			}
			else if(d1==d4&&d2==d3){
				if(d1>d2){
					cout<<"だ计= "<<d1*2;
				}	
				else{
					cout<<"だ计= "<<d2*2;
				}
			}
			else if(d1==d4&&d2!=d3){
				cout<<"だ计= "<<d2+d3;
			}
			else if(d2==d3&&d1==d4){
				if(d2>d1){
					cout<<"だ计= "<<d2*2;
				}
				else{
					cout<<"だ计= "<<d1*2;
				}
			}
			else if(d2==d3&&d1!=d4){
				cout<<"だ计= "<<d1+d4;
			}
			else if(d2==d4&&d1==d3){
				if(d2>d1){
					cout<<"だ计= "<<d2*2;
				}
				else{
					cout<<"だ计= "<<d1*2;
				}
			}
			else if(d2==d4&&d1!=d3){
				cout<<"だ计= "<<d1+d3;
			}
			else if(d3==d4&&d1==d2){
				if(d3>d1){
					cout<<"だ计= "<<d3*2;
				}
				else{
					cout<<"だ计= "<<d1*2;
				}
			}
			else if(d3==d4&&d1!=d2){
				cout<<"だ计= "<<d1+d2;
			}		
		}
		else {
			cout<<"礚だ计";   //4繷翴计ぃ礚だ计 
		}
		cout<<"\n\n";
	}
}	 
