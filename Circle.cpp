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

Circle::Circle(string& newName, int newRadius) : Shape(name)
{
    this->name = newName;
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
