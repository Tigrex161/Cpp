#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H

class tollBooth{

unsigned int nCars;
double moneyCollected;

public:

tollBooth();
void payingCar();
void noPayCar();
void display() const;

};
#endif
