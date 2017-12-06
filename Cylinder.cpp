//*********************************************************************
//// FILE:        Cylinder.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Cylinder Class. 
////********************************************************************
#include <iostream>
#include <math.h>
#include <iomanip>
#include "Cylinder.h"

using namespace std;

// Constructs a cylinder and passes info to baseclass Circle
Cylinder::Cylinder(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

// Calculates area of a cylinder and returns it
double Cylinder::getArea() const
{
    double area = 2*M_PI*Circle::getRadius()*height+2*M_PI*(Circle::getRadius()*Circle::getRadius());
    return area;
}

// Calculates the volume of a cylinder and returns it
double Cylinder::getVolume() const
{
    double volume = M_PI*(Circle::getRadius()*Circle::getRadius())*height; 
    return volume;
}

// Prints all cylinders information out
void Cylinder::print() const
{
    Shape::print();
    cout << fixed << setprecision(2) << ", radius ";
    cout << Circle::getRadius();
    cout << ", area ";
    cout << getArea();
    cout << ", height " << height << ", volume " << getVolume() << endl;
}
