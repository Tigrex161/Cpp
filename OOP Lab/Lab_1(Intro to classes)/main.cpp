#include <iostream>
#include "rectangle.h"
#include "account.h"
#include "rational.h"
using namespace std;

int main()
{
    //Rectangle one;
    //Account two;

    Rational three(36,24);
    Rational four(6,24);
    three.divide(four);
    three.printFrac();
    return 0;
}
