#include <iostream>
#include "rectangle.h"
#include "account.h"
#include "rational.h"
#include "complex.h"
using namespace std;

int main()
{
    //Rectangle one;
    //Account two;

    Rational three(36,248);
    Rational four(54,215);
    four.subtract(three);
    four.printFrac();
    //complex1 one(2,3);
    //one.display();

    return 0;
}
