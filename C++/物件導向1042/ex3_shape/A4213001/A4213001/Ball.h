#ifndef Ball_H
#define Ball_H
#include "Shape3D.h"

class Ball : public Shape3D
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string &color, bool filled);
	double getRadius() const;
	void setRadius(double);
	double getArea() const;
	double getVolumn() const;
	string toString() const;

private:
	double radius;
};  // Must place semicolon here

#endif