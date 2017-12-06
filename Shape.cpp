//*********************************************************************
//// FILE:        Shape.cpp 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store logic for the Shape Class. 
////********************************************************************
#include <iostream>
#include "Shape.h"

// using namespace std;
using std::cout;
using std::endl;

// Constructor for the OG abstract class - shape
Shape::Shape(const string& name)
{
    this->name = name;
}

// Destructor for the shape class
Shape::~Shape()
{
}

// The print method for the shape class
void Shape::print() const
{
    cout << name;
}
