#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int d1,d2,d3,d4;//�N��4����l���ܼ� 
	
	srand(time(0));//�üƺؤl 
	
	for(int q=1;q<=5;q++){  //����5�� 
	    d1=1+rand()%6;   
	    d2=1+rand()%6;   //4���Y��l 
	    d3=1+rand()%6;
		d4=1+rand()%6;
	
		cout<<d1<<"   "<<d2<<"   "<<d3<<"   "<<d4<<"   ";
	
		if(d1==d2&&d1==d3&&d1==d4){
			cout<<"����= "<<"100";  //4�ӻ�l�P�I�� ���Ƭ�100 
		}
		else if(d1==d2&&d1==d3){  
			cout<<"�L����";
		}
		else if(d1==d2&&d1==d4){
			cout<<"�L����";
		}                           //3�ӻ�l�P�I��  �L���� 
		else if(d1==d3&&d1==d4){
			cout<<"�L����";
		}
		else if(d2==d3&&d3==d4){
			cout<<"�L����";
		}
		else if(d1==d2||d1==d3||d1==d4||d2==d3||d2==d4||d3==d4){    //�ܤ�2�ӻ�l�P�I�Ʈ� 
			if(d1==d2&&d3==d4){    //��2���Y�l�P�I�ơA�t�~2�ӻ�l�]�P�I�ơA�������j�A����=�j��*2(�q37���102��{���X) 
				if(d1>d3){
					cout<<"����= "<<d1*2;    
				}
				else{
					cout<<"����= "<<d3*2;
				}
			}
			else if(d1==d2&&d3!=d4){
				cout<<"����= "<<d3+d4;
			}
			else if(d1==d3&&d2==d4){
				if(d1>d2){
					cout<<"����= "<<d1*2;
				}
				else{
					cout<<"����= "<<d2*2;
				}
			}
			else if(d1==d3&&d2!=d4){
				cout<<"����= "<<d2+d4;
			}
			else if(d1==d4&&d2==d3){
				if(d1>d2){
					cout<<"����= "<<d1*2;
				}	
				else{
					cout<<"����= "<<d2*2;
				}
			}
			else if(d1==d4&&d2!=d3){
				cout<<"����= "<<d2+d3;
			}
			else if(d2==d3&&d1==d4){
				if(d2>d1){
					cout<<"����= "<<d2*2;
				}
				else{
					cout<<"����= "<<d1*2;
				}
			}
			else if(d2==d3&&d1!=d4){
				cout<<"����= "<<d1+d4;
			}
			else if(d2==d4&&d1==d3){
				if(d2>d1){
					cout<<"����= "<<d2*2;
				}
				else{
					cout<<"����= "<<d1*2;
				}
			}
			else if(d2==d4&&d1!=d3){
				cout<<"����= "<<d1+d3;
			}
			else if(d3==d4&&d1==d2){
				if(d3>d1){
					cout<<"����= "<<d3*2;
				}
				else{
					cout<<"����= "<<d1*2;
				}
			}
			else if(d3==d4&&d1!=d2){
				cout<<"����= "<<d1+d2;
			}		
		}
		else {
			cout<<"�L����";   //4���Y�l�I�ƬҤ��P�A�L���� 
		}
		cout<<"\n\n";
	}
}	 
