#include"Complex.h"

int main(){
	cout << "Complex complex1"<<endl;
	Complex complex1;
	cout << "complex1.displayComplex():"<<endl;
	complex1.displayComplex();
	cout << "\nComplex complex2(2,-2)" << endl;
	Complex complex2(2,-2);
	cout << "complex1.addiCplx(complex2).displayComplex():" << endl;
	complex1.addiCplx(complex2).displayComplex();
	cout << "\ncomplex1.subtCplx(complex2).displayComplex():" << endl;
	complex1.subtCplx(complex2).displayComplex();
	cout << "\ncomplex1.multCplx(complex2).displayComplex():" << endl;
	complex1.multCplx(complex2).displayComplex();
	cout << endl;


	cout << endl;
	system("pause");
};