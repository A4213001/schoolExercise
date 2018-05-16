#include<iostream>
using namespace std;

int main(){
	
	int a;
	
	cout<<"請輸入該周銷售毛額\n輸入-1結束:";
	cin>>a;	
	
	while(a!=-1)
	{	
       cout<<"薪資為"<<200+a*0.09<<endl; 
       
       
	   cout<<"請輸入該周銷售毛額\nor輸入-1結束:";
	   cin>>a;	
	}
}
