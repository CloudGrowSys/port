#include "train.h"


Train::Train(int type) 
{
    traintype = type;
    if (traintype == TYPE1)
    {
        max = 40;
    }
    else
    {
        max = 100;
    }
}


void Train::push(Container cont)
{
    containers.push(cont);
}


bool Train::isFull()
{
    return this->containers.size() == max;
}

int Train::size()
{
    return this->containers.size();
}


Container Train::pop_container()
{
    Container temp = containers.front();
    containers.pop();
    return temp;
}