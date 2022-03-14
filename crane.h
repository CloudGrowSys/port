#ifndef CRANE
#define CRANE

#include "container.h"

class Crane
{

public:
 
    Crane();

    void load ( Container cont ); 

    Container unload();


private:
   int container_id;
   Container container;


};

#endif