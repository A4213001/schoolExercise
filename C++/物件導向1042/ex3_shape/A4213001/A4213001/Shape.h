#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include<iomanip>
using namespace std;

class Shape
{
public:
	Shape();
	Shape(const string &color, bool filled);
	string getColor() const;
	void setColor(const string &color);
	bool isFilled() const;
	void setFilled(bool filled);
	virtual double getArea() const=0;
	virtual string toString() const;

private:
	string color;
	bool filled;
}; 

#endif