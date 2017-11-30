#include <iostream>
#include <string>
#include "Circle.h"

using std::cout;
using std::endl;
using std::string;

Circle::Circle(string newName, int newRadius)
{
    name = newName;
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
    cout << name << ", radius" << radius << ", area " << getArea();
}
