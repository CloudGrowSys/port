#include "crane.h"
#include "ship.h"


Crane::Crane()
{
}


Container Crane::unload()
{
    return this->container;
}

void Crane::load (Container cont)
{
    this->container = cont;
}
