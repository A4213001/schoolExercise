#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"請輸入工作時數\nor輸入-1結束:";
	cin>>a;
	
	while(a!=-1){
		
		if(a<=40){
			b=a*10;
		} 
		else{
			b=400+15*(a-40);
		}
		cout<<"時薪為10元"<<endl;
		cout<<"薪資共:"<<b<<endl; 
		
		cout<<"請輸入工作時數\nor輸入-1結束:";
	    cin>>a;
	}
}
