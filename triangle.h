#include <iostream>
#include <math.h>
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    public:
    Triangle() : side_1(3),side_2(4),side_3(5){}
    double get_area(){
        return (side_1*side_2)/2;
    }
    double get_perimeter(){
        return side_1+side_2+side_3;
    }
    private:
    const short side_1;
    const short side_2;
    const short side_3;
    
};




#endif //TRIANGLE_H