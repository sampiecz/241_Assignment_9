//*********************************************************************
//// FILE:        Circle.h 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store prototypes and data members for Circle Class. 
////********************************************************************
#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
#include "Shape.h"

using std::string;

class Circle : public Shape
{
    public:
        Circle(const string&, int);
        int getRadius() const;
        virtual double getArea() const;
        void print() const;

    private:
        int radius;
};

#endif
