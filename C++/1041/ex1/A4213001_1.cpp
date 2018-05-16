#include<iostream>
using namespace std;

int main(){
	
	int s=100;
	int a,b,c;
	
	while(s<1000)
	{
		a=s%10;
		b=s/10%10;
		c=s/100;
		
		if(s==a*a*a+b*b*b+c*c*c){
			cout<<s<<"	";
		}
		s=s+1;
	}
}

