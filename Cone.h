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

class Cone : public Circle
{
    public:
        String(string, int, int);
        double getArea();
        virtual double getVolume();
        void print();

    private:
        int height;
};

#endif
