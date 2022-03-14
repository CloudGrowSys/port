#include "switchyard.h"
#include <iostream>
using namespace std;

switchYard::switchYard()
{
}

// load containers from T1 to shipping train (T2)
void switchYard::loadContainers(Train& Type1Train)
{
    Train shipTrain(2);

    if (Type1Train.size() >= 40) // if the t1 is full at 40
    {
        while (!(Type1Train.size() == 0))
        {
            Container temp = Type1Train.pop_container();
            shipTrain.push(temp);
        }
    }
    else
    {
        std::cout << "Not full yet. Continue filling T1 switching train..." << std::endl;
    }
}

// Ship out the train
int switchYard::shipout(Train& t1Train)
{
    std::cout << "Shipping Train #" << trainsSent << "leaving" << std::endl;
    int count = 0;
    while (t1Train.size() > 0)
    {
        t1Train.pop_container();
        count++;
    }
    trainsSent++;

    return count;
}

int switchYard::totalShipped()
{
    return trainsSent;
}