//*********************************************************************
//// FILE:        Cone.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Cone Class. 
////********************************************************************
#include <cmath>
#include <ctgmath>
#include <iostream>
#include <string>
#include "Cone.h"

using std::sqrt;
using std::cout;
using std::endl;
using std::string;

Cone::Cone(const string newName, int newRadius, int newHeight) : Circle(name, radius)
{
    name = newName;
    radius = newRadius;
    height = newHeight;
}

double Cone::getArea() 
{
    double area = 3.14*((radius)(radius+sqrt((height*height)+(radius*radius))));
    return area;
}

double Cone::getVolume() 
{
    double volume = 3.14*(radius*radius)(height/3); 
    return volume;
}

void Cone::print() 
{
    cout << Circle::print() << ", " << height << ", " << getVolume() << endl;
}
