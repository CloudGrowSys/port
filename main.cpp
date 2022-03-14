#include <iostream>
#include <random>
#include <vector>
#include <stack>
#include <fstream>
#include <ctime>

#include "container.h"
#include "ship.h"
#include "train.h"
#include "crane.h"
#include "switchyard.h"
using namespace std;

void initialize (vector<Crane>& craneVec);


int main ()
{
    Ship myShip;

    vector<Crane> cranes;

    initialize(cranes);

    Train train(TYPE1);
    switchYard switchyard;

    while (!(myShip.isEmpty()))
    {
        for (auto crane : cranes)
        {
            
            if (!(myShip.isEmpty()))
            {
                Container temp = myShip.pop_container();
          
                crane.load(temp);
                
                // If the train isn't full, push it there
                if (!(train.isFull()))
                {
                    train.push(crane.unload());
                }
                else
                {
                    std::cout << "loading containers" << std::endl;
                    switchyard.shipout(train);
                }
            }
            else
            {
                break;
            }
        }
    }

    if (train.size() > 0)
    {
        std::cout << "Shipping out last train" << std::endl << std::endl;
        switchyard.shipout(train);
    }

   
    std::cout << "Total Trains Shipped Out: " << switchyard.totalShipped() << endl;


    return 0;
}

void initialize (vector<Crane>& allCranes)
{
    srand(time(0));
    allCranes.reserve(9);
    for (int i = 0; i < 9; i++)
    {  
        allCranes.push_back(Crane());  
    }

}