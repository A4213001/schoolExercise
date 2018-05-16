#include "Rectangle.h"

// Construct a default rectangle object
Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

// Construct a rectangle object with specified width and height
Rectangle::Rectangle(double width, double height)
{
	this->width = width;
	this->height = height;
}

Rectangle::Rectangle(
	double width, double height, const string &color, bool filled)
{
	this->width = width;
	this->height = height;
	setColor(color);
	setFilled(filled);
}

// Return the width of this rectangle
double Rectangle::getWidth() const
{
	return width;
}

// Set a new radius
void Rectangle::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

// Return the height of this rectangle
double Rectangle::getHeight() const
{
	return height;
}

// Set a new height
void Rectangle::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

// Return the area of this rectangle
double Rectangle::getArea() const
{
	return width * height;
}

// Return the perimeter of this rectangle
double Rectangle::getPerimeter() const
{
	return 2 * (width + height);
}

// Redefine the toString function, to be covered in Section 15.5
string Rectangle::toString() const
{
	return "顏色為		: " + getColor() +
		"\n是否填滿	: " + to_string(isFilled()) +
		"\n長		: " + to_string((int)height) +
		"\n寬		: " + to_string((int)width) +
		"\n面積		: " + to_string((int)getArea()) +
		"\n周長		: "+to_string((int)getPerimeter())+
		"\n類別為		: "+"Rectangle object";
}