#include <iostream>
#include <math.h>
#ifndef STUDENT_H
#define STUDENT_H

class Student{
    public:
    void set_name(const char* inname){
        for(int i=0;i<strlen(inname);i++){
            name[i]=inname[i];
        }
    }
    void set_surname(const char* insurname){
        for(int i=0;i<strlen(insurname);i++){
            surname[i]=insurname[i];
        }
    }
   char* get_name(){
        return name;
    }
   char* get_surname(){
        return surname;
    }
    
    private:
    char name[20];
    char surname[40];
    
};




#endif