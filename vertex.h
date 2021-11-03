#include <iostream>
#include <time.h>
#ifndef VERTEX_H
#define VERTEX_H

class Vertex{
public:
void foo(){
    srand(time(0));
    for(int i=0;i<5;i++){
        x=rand()%100-100;
        y=rand()%100-100;
        std::cout<<i+1<<" point ("<<x<<')'<<" ("<<y<<")\n";
    }
}


private:
    int x;
    int y;
};






#endif //VERTEX_H