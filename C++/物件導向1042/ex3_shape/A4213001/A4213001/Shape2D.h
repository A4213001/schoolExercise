#ifndef SHAPE2D_H
#define SHAPE2D_H
#include <string>
#include"Shape.h"
using namespace std;

class Shape2D : public Shape
{
public:
	Shape2D();
	Shape2D(const string &color, bool filled);
	string getColor() const;
	void setColor(const string &color);
	bool isFilled() const;
	void setFilled(bool filled);
	virtual string toString() const;
	virtual double getArea() const = 0;
	

private:
	string color;
	bool filled;
}; // Must place semicolon here

#endif