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
#include <ctgmath>
#include <iostream>
#include <string>
#include "Cone.h"

using namespace std;

Cone::Cone(const string& name, int radius, int height) : Circle(name, radius)
{
    this->height = height;
}

double Cone::getArea() const 
{
    double area = (2.0 * M_PI * Circle::getRadius() * Circle::getRadius()) + (2.0 * M_PI * Circle::getRadius() * Circle::getRadius() * height);
    return area;
}

double Cone::getVolume() const 
{  
    double volume = (M_PI*Circle::getRadius()*Circle::getRadius()*height)/3; 
    return volume;
}

void Cone::print() const 
{
    Circle::print(); 
    cout << ", " << height << ", " << getVolume() << endl;
}
