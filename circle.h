#include <iostream>
#include <math.h>
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    public:
    Circle(double inradius) : PI(3.14), radius(inradius){}
    double get_area(){
        return PI*pow(radius,2);
    }
    double get_circumference(){
        return 2*PI*radius;
    }
    private:
    const double PI ;
    double radius;
};




#endif