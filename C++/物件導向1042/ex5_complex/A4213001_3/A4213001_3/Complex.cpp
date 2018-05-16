#include"Complex.h"

Complex::Complex(){
	Real = 1;
	Imaginary = 1;
};
Complex::Complex(double Real, double Imaginary){
	this->Real = Real;
	this->Imaginary = Imaginary;
};
Complex::~Complex(){

};
Complex Complex::addiCplx(const Complex &secondComplex) const{
	double r, i;
	r = this->Real + secondComplex.Real;
	i = this->Imaginary + secondComplex.Imaginary;
	Complex ans(r, i);
	return ans;
};
Complex Complex::subtCplx(const Complex &secondComplex) const{
	double r, i;
	r = this->Real - secondComplex.Real;
	i = this->Imaginary - secondComplex.Imaginary;
	Complex ans(r, i);
	return ans;
};
Complex Complex::multCplx(const Complex &secondComplex) const{
	double r, i;
	r = this->Real*secondComplex.Real-this->Imaginary*secondComplex.Imaginary;
	i = this->Real*secondComplex.Imaginary+this->Imaginary*secondComplex.Real;
	Complex ans(r, i);
	return ans;
};
string Complex::displayComplex() const{
	if (Real != 0){
		if (Imaginary != 0)
			return to_string((int)Real) + ((Imaginary >= 0) ? "+" : "") + to_string((int)Imaginary) + "i";
		else
			return to_string((int)Real);
	}
	else if (Imaginary != 0)
		return  to_string((int)Imaginary) + "i";
	else
		return to_string((int)Real);
};
double Complex::getReal() const{
	return Real;
};
double Complex::getImaginary() const{
	return Imaginary;
};
void Complex::setReal(double Real){
	this->Real = Real;
};
void Complex::setImaginary(double Imaginary){
	this->Imaginary = Imaginary;
};
void Complex::operator=(const Complex &secondComplex){
	Real = secondComplex.Real;
	Imaginary = secondComplex.Imaginary;
};
Complex operator+(const Complex complex, const Complex &secondComplex){
	return complex.addiCplx(secondComplex);
};
Complex operator-(const Complex complex, const Complex &secondComplex){
	return complex.subtCplx(secondComplex);
};
Complex operator*(const Complex complex, const Complex &secondComplex){
	return complex.multCplx(secondComplex);
};
Complex Complex::operator++(){
	Imaginary++;
	Real++;
	return *this;
};
Complex Complex::operator--(){
	Imaginary--;
	Real--;
	return *this;
};
Complex Complex::operator--(int d){
	Imaginary--;
	Real--;
	return *this;
};
Complex Complex::operator++(int d){
	Imaginary++;
	Real++;
	return *this;
};
bool operator<(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)<pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
bool operator<=(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)<=pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
bool operator>(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)>pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
bool operator>=(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)>=pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
bool operator==(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)==pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
bool operator!=(const Complex &complex, const Complex &secondComplex){
	if (pow(complex.getReal(), 2) + pow(complex.getImaginary(), 2)!=pow(secondComplex.getReal(), 2) + pow(secondComplex.getImaginary(), 2)){
		return 1;
	}
	else
		return 0;
};
ostream& operator <<(ostream& os, const Complex & complex){
	os << complex.displayComplex(); 
	return os;
};
void operator >>(istream& is,Complex& complex){
	double a,b;
	is >> a>>b;
	complex.setReal(a);
	complex.setImaginary(b);
};