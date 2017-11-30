#ifndef CONE_H
#define CONE_H

class Cone
{
    public:
        String(string, int, int);
        double getArea();
        double virtual getVolume();
        void print();

    private:
        int height;
};

#endif
