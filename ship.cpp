#include "ship.h"
#include <vector>
#include <cstdlib>
#include <ctime>


Ship::Ship()
{
    srand(time(0));

    max_containers = (rand() % 250) + 750;
    length = 0;

    for (int i = 0; i < max_containers; i++)
    {
        Container temp;
        containers.push_back(temp);
        length++;
    }

    std::cout << this->size();
    
}

Container Ship::pop_container()
{
    length--;
    return containers.at(length);
}

bool Ship::isEmpty() 
{
    return length == 0;
}

int Ship::size()
{
    return length;
}

int Ship::getMaxCapacity()
{
    return max_containers;
}


void Ship::display(std::ostream& rhs)
{
    for (auto i : containers)
    {
        rhs <<  i << endl;
    }
}

