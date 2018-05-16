#include "Ball.h"
#include"Circle.h"
#include"Cuboid.h"
#include"Rectangle.h"
#include <iostream>
using namespace std;

bool equalArea(Shape &object1,
	Shape &object2)
{
	return object1.getArea() == object2.getArea();
}
void display(Shape &object)
{
	cout<<object.toString()<<endl;
}

int main()
{
	Ball ball(5);
	Cuboid cuboid(2,3,4);
	Circle circle(5);
	Rectangle rectangle(2,3);
	cout << "display(rectangle)" << endl;
	display(rectangle);
	cout << endl;
	cout << "display(circle)" << endl;
	display(circle);
	cout << endl;
	cout << "display(cuboid)" << endl;
	display(cuboid);
	cout << endl;
	cout << "display(ball)" << endl;
	display(ball);
	cout << endl;

	cout << "equalArea(ball,circle): " <<
		(equalArea(ball, circle) ? "Yes" : "No") << endl;
	system("pause");
	return 0;
}
