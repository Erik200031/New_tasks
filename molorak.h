#include <iostream>
#include <math.h>
#ifndef MOLORAK_H
#define MOLORAK_H

class Molorak{
    public:
    void set_name(std::string inname){
        name=inname;
    }
     void set_distance(double indistance){
        distance=indistance;
    }
     void set_radius(double inradius){
        radius=inradius;
    }
     void set_massa(double inmassa){
        massa=inmassa;
    }
    double get_distance(){
        return distance;
    }
    double get_radius(){
        return radius;
    }
    double get_massa(){
        return massa;
    }
     std::string get_name(){
        return name;
    }
    double get_gravity(){
        return (g*massa)/pow(radius,2);
    }
    public:
    Molorak(std::string input_planet): g(6.67 * pow(10,-11)){
        name=input_planet;
    }
    Molorak():g(6.67 * pow(10,-11)){}
    private:
    std::string name;
    double distance;
    double radius;
    double massa;
    const long double g ;
};




#endif