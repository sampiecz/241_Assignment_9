#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
    public:
        Cylinder(string, int, int);
        double getArea();
        double virtual getVolume();
        void print();

    private:
        int height;

};

#endif
