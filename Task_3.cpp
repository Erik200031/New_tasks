#include <iostream>
#include <math.h>
#include "student.h"

int main(){
    
    Student obj_array[5];
    char name[] = "ARMENIA";
    char surname[] = "Hayastan";
    obj_array[0].set_name(name);
    obj_array[0].set_surname(surname);
    std::cout<<obj_array[0].get_name()<<"\t"<<obj_array[0].get_surname()<<"\n";

    return 0;
}