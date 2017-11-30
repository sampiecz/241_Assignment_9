#include <iostream>
#include <string>
#include "Circle.h"

using std::cout;
using std::endl;
using std::string;

Circle::Circle(string name, int newRadius) : Shape(name)
{
    this->name = name;
    radius = newRadius;
}

int Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
   int area = 3.14(radius*radius); 
   return area;
}

void Circle::print()
{
    cout << Shape::print() << ", radius" << radius << ", area " << getArea();
}
