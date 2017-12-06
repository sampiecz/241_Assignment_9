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

Shape::Shape(const string& name)
{
    this->name = name;
}

Shape::~Shape()
{
}

void Shape::print() const
{
    cout << name << endl;
}
