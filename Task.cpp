#include <iostream>
#include <math.h>
#include "molorak.h"

int main(){
    Molorak obj("Earth");
    obj.set_radius((6.38*pow(10,6)));
    obj.set_massa(5.98*pow(10,24));
    std::cout<<obj.get_gravity();

    return 0;
}