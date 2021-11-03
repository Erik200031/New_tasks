#include <iostream>
#include <math.h>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
    public:
    void set_name(std::string inname){
        name=inname;
    }
    void set_year(int inyear){
        joined_year=inyear;
    }
    void set_address(std::string inaddress){
        address=inaddress;
    }
    void print(){
        std::cout<<"\n"<<get_name()<<"\t"<<get_year()<<"\t"<<get_address()<<"\n";
    }

    public:
    Employee(){}
    Employee(std::string input_name){name=input_name;}
    private:
    std::string get_name(){
        return name;
    }
    int get_year(){
        return joined_year;
    }
    std::string get_address(){
        return address;
    }
    std::string name;
    int joined_year;
    std::string address;
    
};




#endif