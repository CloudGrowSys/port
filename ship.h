#ifndef SHIP
#define SHIP

#include "container.h"
#include <iostream>
#include <vector>

#define mincontainers 750
#define maxcontainers 1000


using namespace std;

class Ship
{
public:
    Ship();

    Container pop_container();

    bool isEmpty();

    int size();

    int getMaxCapacity();

    void display(std::ostream& rhs);


private:
    
    int max_containers;   // 750-1000
    int length;

    vector<Container> containers;

};


// Print out for Ship
inline
std::ostream& operator<<(std::ostream& rhs, Ship& prt)
{
    prt.display(rhs);
    return rhs;
}

#endif