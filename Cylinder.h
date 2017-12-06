//*********************************************************************
//// FILE:        Cylinder.h 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store prototypes and data members for Cylinder Class. 
////********************************************************************
#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>
#include "Circle.h"

using std::string;

class Cylinder : public Circle
{
    public:
        Cylinder(const string&, int, int);
        double getArea() const;
        virtual double getVolume() const;
        void print() const;

    private:
        int height;

};

#endif
