#ifndef YARD
#define YARD

#include <vector>
#include "train.h"

using namespace std;

class switchYard
{
public:
    switchYard();   

    void loadContainers(Train& Type1Train);

    int shipout(Train& t1Train);

    int totalShipped();


private:
    vector<Container> Type2Train;

    int trainsSent = 0;

};

#endif