//*********************************************************************
//// FILE:        Cone.h 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store prototypes and data members for Cone Class. 
////********************************************************************
#ifndef CONE_H
#define CONE_H

#include <string>
#include "Circle.h"

using std::string;

class Cone : public Circle
{
    public:
        Cone(const string, int, int);
        double getArea() const;
        virtual double getVolume() const;
        void print() const;

    private:
        int height;
};

#endif
