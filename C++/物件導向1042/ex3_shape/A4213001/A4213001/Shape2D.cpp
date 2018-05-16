#include "SHAPE2D.h"

Shape2D::Shape2D()
{
	color = "white";
	filled = false;
}

Shape2D::Shape2D(const string &color, bool filled)
{
	this->color = color;
	this->filled = filled;
}

string Shape2D::getColor() const
{
	return color;
}

void Shape2D::setColor(const string &color)
{
	this->color = color;
}

bool Shape2D::isFilled() const
{
	return filled;
}

void Shape2D::setFilled(bool filled)
{
	this->filled = filled;
}

string Shape2D::toString() const
{
	return "Shape2D";
}