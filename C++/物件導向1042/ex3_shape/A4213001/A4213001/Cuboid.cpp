#include "Cuboid.h"

// Construct a default Cuboid object
Cuboid::Cuboid()
{
	width = 1;
	height = 1;
	length = 1;
}

// Construct a Cuboid object with specified width and height
Cuboid::Cuboid(double width, double height,double length)
{
	this->width = width;
	this->height = height;
	this->length = length;
}

Cuboid::Cuboid(
	double width, double height,double length, const string &color, bool filled)
{
	this->width = width;
	this->height = height;
	this->length = length;
	setColor(color);
	setFilled(filled);
}

// Return the width of this Cuboid
double Cuboid::getWidth() const
{
	return width;
}

// Set a new radius
void Cuboid::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

// Return the height of this Cuboid
double Cuboid::getHeight() const
{
	return height;
}

// Set a new height
void Cuboid::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

double Cuboid::getLenght() const{
	return length;
};

void Cuboid::setLenght(double length){
	this->length = (length >= 0) ? length : 0;
};

// Return the area of this Cuboid
double Cuboid::getArea() const
{
	return (length*width + width*height + height*length)*2;
}

// Return the perimeter of this Cuboid
double Cuboid::getVolumn() const
{
	return length*width * height;
}

// Redefine the toString function, to be covered in Section 15.5
string Cuboid::toString() const
{
	return "�C�⬰		: " + getColor() + 
		"\n�O�_��	: " + to_string(isFilled()) +
		"\n��		: " + to_string((int)length) +
		"\n�e		: " + to_string((int)width) +
		"\n��		: " + to_string((int)height) +
		"\n���n		: " + to_string((int)getArea()) +
		"\n��n		: "+to_string((int)getVolumn())+
		"\n���O��		: " + "Cuboid object";
}