#include "Shape3D.h"

Shape3D::Shape3D()
{
	color = "white";
	filled = false;
}

Shape3D::Shape3D(const string &color, bool filled)
{
	this->color = color;
	this->filled = filled;
}

string Shape3D::getColor() const
{
	return color;
}

void Shape3D::setColor(const string &color)
{
	this->color = color;
}

bool Shape3D::isFilled() const
{
	return filled;
}

void Shape3D::setFilled(bool filled)
{
	this->filled = filled;
}

string Shape3D::toString() const
{
	return "Shape3D";
}