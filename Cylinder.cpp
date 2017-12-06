//*********************************************************************
//// FILE:        Cylinder.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Cylinder Class. 
////********************************************************************
#include <iostream>
#include "Cylinder.h"

using std::cout;
using std::endl;

Cylinder::Cylinder(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

Cylinder::double getArea() const
{
    double area = 2*3.14*radius*height+2*3.14*(radius*radius);
    return area;
}

double Cylinder::getVolume() const
{
    double volume = 3.14*(radius*radius)*height; 
    return volume;
}

void Cylinder::print() const
{
    Circle::print();
    cout << ", " << height << ", " << getVolume() << endl;
}
