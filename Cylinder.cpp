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

Cylinder::Cylinder(const string newName, int newRadius, int newHeight) : Circle(name, radius)
{
    name = newName;
    radius = newRadius;
    height = newHeight;
}

Cylinder::double getArea()
{
    double area = 2*3.14*radius*height+2*3.14*(radius*radius);
    return area;
}

double Cylinder::getVolume()
{
    double volume = 3.14*(radius*radius)*height; 
    return volume;
}

void Cylinder::print()
{
    cout << Circle::print() << ", " << height << ", " << getVolume() << endl;
}
