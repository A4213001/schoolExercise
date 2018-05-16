#include "Circle.h"

// Construct a default circle object
Circle::Circle()
{
	radius = 1;
}

// Construct a circle object with specified radius
Circle::Circle(double radius)
{
	this->radius = radius;
}

// Construct a circle object with specified radius,
//  color and filled values
Circle::Circle(double radius, const string &color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

// Return the radius of this circle
double Circle::getRadius() const
{
	return radius;
}

// Set a new radius
void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this circle
double Circle::getArea() const
{
	return radius * radius * 3.14159;
}

// Return the perimeter of this circle
double Circle::getPerimeter() const
{
	return 2 * radius * 3.14159;
}

// Redefine the toString function
string Circle::toString() const
{
	return  "�C�⬰		: " + getColor() + 
		"\n�O�_��	: " + to_string(isFilled()) +
		"\n�b�|		: " + to_string((int)radius) +
		"\n���n		: " + to_string(getArea()) +
		"\n�P��		: " + to_string(getPerimeter()) +
		"\n���O��		: " + "Circle object";
}