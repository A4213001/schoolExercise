#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include<string>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(double Real, double Imaginary);
	~Complex();
	Complex addiCplx(const Complex &secondComplex) const;
	Complex subtCplx(const Complex &secondComplex) const;
	Complex multCplx(const Complex &secondComplex) const;
	void displayComplex() const;
	double getReal() const;
	double getImaginary() const;
	void setReal(double Real);
	void setImaginary(double Imaginary);
	void operator=(const Complex &secondComplex);
private:
	double Real;
	double Imaginary;
};
Complex operator+(const Complex &complex,const Complex &secondComplex);
Complex operator-(const Complex &complex,const Complex &secondComplex);
Complex operator*(const Complex &complex,const Complex &secondComplex);

#endif