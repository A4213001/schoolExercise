#include"Complex.h"

int main(){
	cout << "Complex complex1"<<endl;
	Complex complex1;
	cout << "Complex complex2" << endl;
	Complex complex2;
	cout<<"++complex1"<<endl;
	++complex1;
	cout << "Complex is " << complex1 << "!!" << endl;
	cout << "--complex1" << endl;
	--complex1;
	cout << "Complex is " << complex1 << "!!" << endl;
	cout << "complex1++" << endl;
	complex1++;
	cout << "Complex is " << complex1 << "!!" << endl;
	cout << "complex1--" << endl;
	complex1--;
	cout << "Complex is " << complex1 << "!!" << endl;
	complex1.displayComplex();
	cout << "cout<<(complex1 < complex2):"<<endl;
	cout<<(complex1 < complex2);
	cout << "\ncout<<(complex1 <= complex2):" << endl;
	cout << (complex1 <= complex2);
	cout << "\ncout<<(complex1 > complex2):" << endl;
	cout << (complex1 > complex2);
	cout << "\ncout<<(complex1 >= complex2):" << endl;
	cout << (complex1 >= complex2);
	cout << "\ncout<<(complex1 == complex2):" << endl;
	cout << (complex1 < complex2);
	cout << "\ncout<<(complex1 != complex2):" << endl;
	cout << (complex1 <= complex2);
	cout << "\n½Ð¿é¤J½Æ¼Æ:";
	cin >> complex1;
	cout << "Complex is " << complex1 << "!!" << endl;
	system("pause");
};