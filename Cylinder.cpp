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
#include "Cylinder.h"

using std::cout;
using std::endl;

Cylinder::Cylinder(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

double Cylinder::getArea() const
{
    double area = 2*M_PI*Circle::getRadius()*height+2*M_PI*(Circle::getRadius()*Circle::getRadius());
    return area;
}

double Cylinder::getVolume() const
{
    double volume = M_PI*(Circle::getRadius()*Circle::getRadius())*height; 
    return volume;
}

void Cylinder::print() const
{
    Circle::print();
    cout << ", " << height << ", " << getVolume() << endl;
}
