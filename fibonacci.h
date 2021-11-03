#include <iostream>
#ifndef FIBONACCI_H
#define FIBONACCI_H
class Fibonacci{
public:
Fibonacci():x(0),y(1){}
void foo(int param){
    for(int i=0;i<param;i++){
        if(i==0){
            std::cout<<x<<" ";
            continue;
        }
        else if(i==1){
            std::cout<<y<<" ";
            continue;
        }
        z=x+y;
        x=y;
        y=z;
        std::cout<<z<<" ";
    }
}

private:
    int x;
    int y;
    int z;
};






#endif //FIBONACCI_H