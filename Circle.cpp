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
#include <math.h>
#include "Circle.h"

using std::cout;
using std::endl;
using std::string;

Circle::Circle(const string& name, int radius) : Shape(name)
{
    this->radius = radius;
}

int Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
   int area = (M_PI)*(getRadius()*getRadius()); 
   return area;
}

void Circle::print() const
{
    Shape::print();
    cout << ", radius " << radius << ", area " << getArea();
}
