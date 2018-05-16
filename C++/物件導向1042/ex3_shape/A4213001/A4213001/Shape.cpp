#include"Shape.h"
Shape::Shape(){
	color = "white";
	filled = false;
};
Shape::Shape(const string &color, bool filled){
	this->color = color;
	this->filled = filled;
};
string Shape::getColor() const{
	return color;
};
void Shape::setColor(const string &color){
	this->color = color;
};
bool Shape::isFilled() const{
	return filled;
};
void Shape::setFilled(bool filled){
	this->filled = filled;
};
string Shape::toString() const{
	return "Shape";
};