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
    vector<Shape *> shapes;

    // pack that container
    shapes.push_back(new Circle("green circle", 10));
    shapes.push_back(new Cone("yellow cone", 4, 6));
    shapes.push_back(new Cylinder("blue cylinder", 8, 6));
    shapes.push_back(new Cone("purple cone", 9, 7));
    shapes.push_back(new Cylinder("red cylinder", 3, 7));
    shapes.push_back(new Circle("orange circle", 5));
    
    // Print all the shapes
    cout << "\n\nPrinting all shapes...\n" << endl;

    // print those shapes
    for(unsigned i = 0; i < shapes.size(); i++)
    {
        shapes[i]->print();
    }
    
    // Loop through and print only the cylinders
    cout << "\nPrinting all cylinders...\n" << endl;

    for (unsigned j = 0; j < shapes.size(); ++j)
    {
        Cylinder* cylinderPtr = dynamic_cast<Cylinder*>(shapes[j]);
        if (cylinderPtr != nullptr)
        {
            cylinderPtr->print();
        }
    }

    cout << "\n";

    // delete those shapes
    for(unsigned k = 0; k < shapes.size(); k++)
    {
        delete shapes[k]; 
    }

    return 0;
}
