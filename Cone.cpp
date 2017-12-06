//*********************************************************************
//// FILE:        Cone.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Cone Class. 
////********************************************************************
#include <cmath>
#include <math.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Cone.h"

using namespace std;

// Constructs the cone, also passes variables up to baseclass circle
Cone::Cone(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

// Calculates the area of a cone and returns it
double Cone::getArea() const 
{
    double area = (2.0 * M_PI * Circle::getRadius() * Circle::getRadius()) + (2.0 * M_PI * Circle::getRadius() * Circle::getRadius() * height);
    return area;
}

// Calculates the volume of a cone and returns it
double Cone::getVolume() const 
{  
    double volume = (M_PI*Circle::getRadius()*Circle::getRadius()*height)/3; 
    return volume;
}

// Prints all the cones information
void Cone::print() const 
{
    Shape::print(); 
    cout << fixed << setprecision(2) << ", radius " << Circle::getRadius(); 
    cout << ", area " << getArea();
    cout << ", height " << height << ", volume " << getVolume() << endl;
}
