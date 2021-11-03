#include <iostream>
#include <math.h>
#include "employee.h"

int main(){
    Employee obj("Robert");
    obj.set_year(2017);
    obj.set_address("64C - Wall street");
    obj.print();
    return 0;
}