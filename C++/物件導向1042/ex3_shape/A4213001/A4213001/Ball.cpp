#include "Ball.h"

// Construct a default Ball object
Ball::Ball()
{
	radius = 1;
}

// Construct a Ball object with specified radius
Ball::Ball(double radius)
{
	this->radius = radius;
}

// Construct a Ball object with specified radius,
//  color and filled values
Ball::Ball(double radius, const string &color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

// Return the radius of this Ball
double Ball::getRadius() const
{
	return radius;
}

// Set a new radius
void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

// Return the area of this Ball
double Ball::getArea() const
{
	return 4*radius * radius * 3.14159;
}

// Return the perimeter of this Ball
double Ball::getVolumn() const
{
	return 4/3.0 * radius* radius* radius * 3.14159;
}

// Redefine the toString function
string Ball::toString() const
{
	return "顏色為		: " + getColor() + 
		"\n是否填滿	: " + to_string(isFilled()) +
		"\n半徑		: " + to_string((int)radius) +
		"\n面積		: " + to_string(getArea()) +
		"\n體積		: " + to_string(getVolumn()) +
		"\n類別為		: " + "Ball object";
}