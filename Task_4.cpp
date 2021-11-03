#include "circle.h"

int main(){
    
    Circle obj(4);
    std::cout<<"\nThe Circle area is : "<<obj.get_area()<<"\n The circle circumference is : "<<obj.get_circumference()<<"\n";
    return 0;
}