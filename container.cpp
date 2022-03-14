#include "container.h"
#include <iomanip>
#include <cstdlib>
#include <ctime>
  

Container::Container() 
{
    id = rand() % ID_MAX;
    destination = rand() % DESTINATION_MAX;
}   


int Container::getID()
{
    return this->id;
}

int Container::getDestination()
{
    return destination;
}

void Container::display(std::ostream &rhs)
{
    rhs << "Container id = " << id << std::endl; 
    rhs << "Destination id: " << destination << std::endl << std::endl; 
}


