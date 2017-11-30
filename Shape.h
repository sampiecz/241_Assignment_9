//*********************************************************************
//// FILE:        Shape.h 
//// AUTHOR:      Samuel Piecz
//// LOGON ID:    Z1732715
//// DUE DATE:    12/05/17
////
//// PURPOSE:     Store prototypes and data members for Shape Class. 
////********************************************************************
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{

    public:
        Shape(const string&);
        virtual ~Shape();
        virtual void print();
        virtual double getArea() const = 0;

    private:
        string name;

};

#endif
