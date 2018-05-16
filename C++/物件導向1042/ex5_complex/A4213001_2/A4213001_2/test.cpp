#include"Complex.h"

int main(){
	cout << "Complex complex1"<<endl;
	Complex complex1;
	cout << "complex1.displayComplex():"<<endl;
	complex1.displayComplex();
	cout << "\nComplex complex2(2,-2)" << endl;
	Complex complex2(2,-2);
	cout << "(complex1 + complex2).displayComplex():" << endl;
	(complex1 + complex2).displayComplex();
	cout << "\n(complex1 - complex2).displayComplex():" << endl;
	(complex1 - complex2).displayComplex();
	cout << "\n(complex1 * complex2).displayComplex():" << endl;
	(complex1 * complex2).displayComplex();
	cout << "\ncout << (complex1 = complex2):"<<endl;
	complex1 = complex2;
	cout << "complex1 = complex2\ncomplex1.displayComplex():"<<endl;
	complex1.displayComplex();

	cout << endl;
	system("pause");
};