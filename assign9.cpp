//*********************************************************************
//// FILE:        assign9.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Act as a driver programs for the shape class and it's
////              derived classes. 
////********************************************************************
#include <vector>
#include "Shape.h"
#include "Cone.h"
#include "Circle.h"
#include "Cylinder.h"

using std::vector;

int main()
{
    vector<Shape *> shapes(3);

    shapes[0] = new Circle("green circle", 10);
    shapes[1] = new Cone("yellow cone", 4, 6);
    shapes[2] = new Cylinder("blue cylinder", 8, 6);

    return 0;
}
