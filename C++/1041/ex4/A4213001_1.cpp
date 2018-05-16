#include<iostream>
#include<cmath>
using namespace std;

bool checkQua(int);
int booleanAND(int,int);
int booleanOR(int, int);

int main(){
	int a,b;
	
	do{
		if(checkQua(a)==0||checkQua(b)==0){
			cout<<"輸入錯誤"<<endl;
		}
		cout<<"請輸入兩個4進位整數:";
		cin>>a>>b;
    }while(checkQua(a)==0||checkQua(b)==0);
    
    booleanAND(a,b);
    cout<<endl;
    booleanOR(a,b);
} 

bool checkQua(int a){
	int b;
	if(a>=0){
		for(int q=1;q<=4;q++){
			b=a%10;
			if(b<4){
				if(a<10){
					return 1;
				}
				a=a/10;
				continue;
			}
			else{
				return 0;
			}
		}
	}
	else{
		return 0;
	}
}

int booleanAND(int a,int b){
	int c,d,e,f,g,h,i,j=0;
	for(int q=1;q<=4;q++){
		c=a%10;
		d=b%10;
			e=c%2;
			f=d%2;
			if(e==1&&f==1){
				h=1;
			}
			else{
				h=0;
			}
			if(c>1&&d>1){
				g=1; 
			}
			else{
				g=0;
			}
			i=g*2+h;
		a=a/10;
		b=b/10;
		j=j+i*pow(10,q-1);
	}
	cout<<"InputA AND InputB = "<<j;
}

int booleanOR(int a,int b){
		int c,d,e,f,g,h,i,j=0;
	for(int q=1;q<=4;q++){
		c=a%10;
		d=b%10;
			e=c%2;
			f=d%2;
			if(e==1||f==1){
				h=1;
			}
			else{
				h=0;
			}
			if(c>1||d>1){
				g=1; 
			}
			else{
				g=0;
			}
			i=g*2+h;
		a=a/10;
		b=b/10;
		j=j+i*pow(10,q-1);
	}
	cout<<"InputA AND InputB = "<<j;
}
