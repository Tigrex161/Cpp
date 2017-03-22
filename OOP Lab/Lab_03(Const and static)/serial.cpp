#include <iostream>
#include "serial.h"
using namespace std;

int serial::objCount = 0;

serial::serial()
{
objCount += 1;
id = objCount;
}

void serial::getID() const
{cout << "I am object number " << id << endl;}

void serial::getObjCount()
{cout << objCount << endl;}

serial::~serial()
{objCount -= 1;}
