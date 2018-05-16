#include<iostream>
#include<cctype>

using namespace std; 

int main () 
{ 
	char a;
	int b=0,c=0; 
	
	cout<<"輸入樣本(輸入0結束):"; 
	cin>>a;
	while(a!='0'){
		
		if(isupper(a))
			b++;
		else if(islower(a))
			c++;
			cin>>a;
		}
	cout<<"輸出樣本:大寫字"<<b<<"個，小寫字"<<c<<"個";
}
