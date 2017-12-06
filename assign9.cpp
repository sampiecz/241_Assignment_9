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
    shapes.push_back(new Circle("green circle", 10));
    shapes.push_back(new Cone("yellow cone", 4, 6));
    shapes.push_back(new Cylinder("blue cylinder", 8, 6));
    shapes.push_back(new Cone("purple cone", 9, 7));
    shapes.push_back(new Cylinder("red cylinder", 3, 7));
    shapes.push_back(new Circle("orange circle", 5));
    
    // Print all the shapes
    cout << "Printing all shapes..." << endl;
    int counter = 0

    // print those shapes
    for(unsigned i = 0; i < shapes.size(); i++)
    {
        shapes[i]->print();
        count++;
    }
    
    cout << "Printing just cylinders " << endl;
    for(unsigned i = 0; i < count; j++)
    {
    // single out those poor cylinders and print them -- this makes a downcast ptr
    Cylinder* cylinderPtr = dynamic_cast<Cylinder *>(shapes[count]);

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
