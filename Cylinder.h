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

class Cylinder : public Circle
{
    public:
        Cylinder(string, int, int);
        double getArea();
        virtual double getVolume();
        void print();

    private:
        int height;

};

#endif
