#include <iostream>
#include "tollBooth.h"
using namespace std;


tollBooth::tollBooth():nCars(0), moneyCollected(0)
{}

void tollBooth::payingCar()
{
nCars += 1;
moneyCollected += .5;
}

void tollBooth::noPayCar()
{
nCars += 1;
}

void tollBooth::display() const
{
 cout << "Number of cars: " << nCars << endl;
 cout << "Money collected: " << moneyCollected << endl;
}
