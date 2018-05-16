#include<iostream>
using namespace std;

int abc(int ary[],int size);

int main(){
	int arrayOdd[9]={0,1,2,3,4,5,6,7,8};
	int arrayEven[10]={0,1,2,3,4,5,6,7,8,9};
	
	cout<<"OddArray = ";
	for(int w=0;w<9;w++){
		cout<<arrayOdd[w]<<" ";
	}
	cout<<"\nOddReverse = ";
	abc(arrayOdd,9);
	cout<<"\nEvenArray = ";
	for(int w=0;w<10;w++){
		cout<<arrayEven[w]<<" ";
	}
	cout<<"\nOddReverse = ";
	abc(arrayEven,10);
	}

	int  abc(int ary[] , int size){
		int a;
		for(int w=0;w<(size/2);w++){
			a=ary[w];
			ary[w]=ary[size-w-1];
			ary[size-w-1]=a;
		}
		for(int q=0;q<size;q++){
			cout<<ary[q]<<" ";
		}
	}
	
