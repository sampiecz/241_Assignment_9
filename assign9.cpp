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
#include <iostream>

using namespace std;

int main()
{
    vector<Shape *> shapes(6);

    shapes[0] = new Circle("green circle", 10);
    shapes[1] = new Cone("yellow cone", 4, 6);
    shapes[2] = new Cylinder("blue cylinder", 8, 6);
    shapes[3] = new Cone("purple cone", 9, 7);
    shapes[4] = new Cylinder("red cylinder", 3, 7);
    shapes[5] = new Circle("orange circle", 5);

    cout << "Printing all shapes..." << endl;

    for(unsigned i = 0; i < shapes.size(); i++)
    {
        shapes[i]->print();
    }



    cout << "Printing all shapes..." << endl;

    for(unsigned i = 0; i < shapes.size(); i++)
    {
        shapes[i]->print();
    }

    return 0;
}
