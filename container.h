#ifndef CONTAINER
#define CONTAINER

#include <iostream>

#define ID_MAX 1000
#define DESTINATION_MAX 10

class Container
{
public: 
    Container();

    int getDestination();

    int getID();
    
    void display(std::ostream &rhs); 

private:
    int id;
    int destination;
    
};

inline
std::ostream& operator<<(std::ostream& outs, Container& cont)
{
    cont.display(outs);
    return outs;
}


#endif