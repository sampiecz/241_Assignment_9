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
