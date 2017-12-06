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
#include <iomanip>
#include "Circle.h"

using namespace std;

// Constructor for circle calls shape baseclass and sets the name too
Circle::Circle(const string& name, int radius) : Shape(name)
{
    this->radius = radius;
}

// returns the radius 
int Circle::getRadius() const
{
    return radius;
}

// calculates the area and returns it
double Circle::getArea() const
{
   double area = M_PI*(getRadius()*getRadius()); 
   return area;
}

// prints out the circles information, so radius, name, and area with two decimals
void Circle::print() const
{
    Shape::print();
    cout << ", radius " << radius << ", area " << fixed << setprecision(2) << getArea() << endl;
}
