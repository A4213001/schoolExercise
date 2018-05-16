#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr);

int main(){
	int max,min;
	int n1,n2,n3;
	cout<<"Enter 3 numbers: ";
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<"Max is "<<max<<"min is "<<min<<endl;
	system("PAUSE");
}

void maxmin(int a,int b,int c,int *maxPtr,int *minPtr){
	int ma,mi;
	ma=a;
	mi=a;
	if(b>ma){
		ma=b;
	}
	if(b<mi){
		mi=b;
	}
	if(c>ma){
		ma=c;
	}
	if(c<mi){
		mi=c;
	}
	*maxPtr=ma;
	*minPtr=mi;
}
