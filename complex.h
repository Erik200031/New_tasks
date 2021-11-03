#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
public:
void sum(Complex& obj,Complex& obj1){
        std::cout<<'('<<obj.real_part<<' ';
        if (obj.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj.imaginary_part<<obj.tmp<<") + " <<'('<<obj1.real_part<<' ';
        if (obj1.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj1.imaginary_part<<obj1.tmp<<") = ";
       std::cout<< obj.real_part+obj1.real_part;
       if (obj.imaginary_part+obj1.imaginary_part>=0){
            std::cout<<" + ";
        }
        std::cout<<obj.imaginary_part+obj1.imaginary_part<<obj1.tmp<<"\n";
    }
    void sub(Complex& obj,Complex& obj1){
        std::cout<<'('<<obj.real_part<<' ';
        if (obj.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj.imaginary_part<<obj.tmp<<") - " <<'('<<obj1.real_part<<' ';
        if (obj1.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj1.imaginary_part<<obj1.tmp<<") = ";
       std::cout<< obj.real_part-obj1.real_part;
       if (obj.imaginary_part+obj1.imaginary_part>=0){
            std::cout<<" + ";
        }
        std::cout<<obj.imaginary_part-obj1.imaginary_part<<obj1.tmp<<"\n";
    }
    void mul(Complex& obj,Complex& obj1){
        std::cout<<'('<<obj.real_part<<' ';
        if (obj.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj.imaginary_part<<obj.tmp<<") * " <<'('<<obj1.real_part<<' ';
        if (obj1.imaginary_part>=0){
            std::cout<<"+ ";
        }
        std::cout<<obj1.imaginary_part<<obj1.tmp<<") = ";
       std::cout<< (obj.real_part*obj1.real_part)-(obj.imaginary_part*obj1.imaginary_part);
       if (obj.imaginary_part+obj1.imaginary_part>=0){
            std::cout<<" + ";
        }
        std::cout<<(obj.real_part*obj1.imaginary_part)+(obj.imaginary_part*obj1.real_part)<<obj1.tmp<<"\n";
    }

    void set_real_part(double inreal){
        real_part=inreal;
    }
    void set_imaginary_part(double in_imagpart,char in_tmp){
        imaginary_part = in_imagpart;
        tmp = in_tmp;
    }
private:
    double real_part;
    double imaginary_part;
    char tmp;
};






#endif //COMPLEX_H
