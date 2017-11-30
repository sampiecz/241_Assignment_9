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
