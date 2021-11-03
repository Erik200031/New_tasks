#include "complex.h"

int main(){
    
    Complex obj;
    Complex obj1;
    obj.set_real_part(43);
    obj.set_imaginary_part(-3,'i');
    obj1.set_real_part(-2);
    obj1.set_imaginary_part(6,'i');
    obj.sum(obj,obj1);
    obj.sub(obj,obj1);
    obj.mul(obj,obj1);


    return 0;
}