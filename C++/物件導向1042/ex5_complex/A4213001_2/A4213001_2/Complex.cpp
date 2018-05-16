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
void Complex::displayComplex() const{
	if (Real != 0){
		cout << Real;
		if (Imaginary != 0){
			cout << ((Imaginary >= 0) ? "+" : "") << Imaginary << "i";
		}
	}
	else if (Imaginary != 0)
		cout << Imaginary << "i";
	else
		cout << Real;
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
Complex operator+(const Complex &complex, const Complex &secondComplex){
	return complex.addiCplx(secondComplex);
};
Complex operator-(const Complex &complex, const Complex &secondComplex){
	return complex.subtCplx(secondComplex);
};
Complex operator*(const Complex &complex, const Complex &secondComplex){
	return complex.multCplx(secondComplex);
};
