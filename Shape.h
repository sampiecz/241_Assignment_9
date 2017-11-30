#ifndef SHAPE_H
#define SHAPE_H

class Shape
{

    public:
        Shape(const string&);
        virtual ~Shape();
        void virtual print();
        double virtual getArea() {return area};

    private:
        string name;

};

#endif
