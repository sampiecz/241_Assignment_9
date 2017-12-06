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
    // container for those shapes
    vector<Shape *> shapes(6);

    // pack that container
    shapes[0] = new Circle("green circle", 10);
    shapes[1] = new Cone("yellow cone", 4, 6);
    shapes[2] = new Cylinder("blue cylinder", 8, 6);
    shapes[3] = new Cone("purple cone", 9, 7);
    shapes[4] = new Cylinder("red cylinder", 3, 7);
    shapes[5] = new Circle("orange circle", 5);

    cout << "Printing all shapes..." << endl;

    // print those shapes
    for(unsigned i = 0; i < shapes.size(); i++)
    {
        shapes[i]->print();
    }

    cout << "Printing just cylinders " << endl;

    // single out those poor cylinders and print them -- this makes a downcast ptr
    Cylinder* cylinderPtr = dynamic_cast<Cylinder *>(shapes[i]);

    if(cylinderPtr != nullptr)
    {
        cylinderPtr->print();
    }

    // delete those shapes
    for(unsigned i = 0; i < shapes.size(); i++)
    {
        delete shapes[i]; 
    }

    return 0;
}
