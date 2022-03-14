#ifndef TRAIN
#define TRAIN

#include "container.h"
#include <queue>
#include <iostream>




#define TYPE1 1
#define TYPE2 2
class Train
{
public:
    Train(int type);

    void push(Container cont);

    Container pop_container();

    int size();
    
    bool isFull();


private:
    std::queue<Container> containers;
    int traintype;
    int max;

};

#endif