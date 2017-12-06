//*********************************************************************
//// FILE:        Circle.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Circle Class. 
////********************************************************************
#include <iostream>
#include <string>
#include "Circle.h"

using std::cout;
using std::endl;
using std::string;

Circle::Circle(const string newName, int newRadius) : Shape(name)
{
    name = newName;
    radius = newRadius;
}

int Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
   int area = 3.14(radius*radius); 
   return area;
}

void Circle::print() const
{
    cout << Shape::print() << ", radius" << radius << ", area " << getArea();
}
