#include<iostream>
#include<cctype>

using namespace std; 

int main () 
{ 
	char a;
	int b=0,c=0; 
	
	cout<<"��J�˥�(��J0����):"; 
	cin>>a;
	while(a!='0'){
		
		if(isupper(a))
			b++;
		else if(islower(a))
			c++;
			cin>>a;
		}
	cout<<"��X�˥�:�j�g�r"<<b<<"�ӡA�p�g�r"<<c<<"��";
}
