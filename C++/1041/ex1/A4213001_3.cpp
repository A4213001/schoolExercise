#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"�п�J�u�@�ɼ�\nor��J-1����:";
	cin>>a;
	
	while(a!=-1){
		
		if(a<=40){
			b=a*10;
		} 
		else{
			b=400+15*(a-40);
		}
		cout<<"���~��10��"<<endl;
		cout<<"�~��@:"<<b<<endl; 
		
		cout<<"�п�J�u�@�ɼ�\nor��J-1����:";
	    cin>>a;
	}
}
