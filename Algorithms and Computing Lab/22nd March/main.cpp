#include <iostream>

#include "function.h"


int main()
{
    using namespace std;
    char ans;
    int i;
    int cont{1};

    while(cont >= 1){

    cout << "Enter \n 1 for Temperature converter \n 2 for the Squaring program \n 3 for the Sum of digits program \n 4 for Tax calculator \n 5 for Fraction addition \n 6 for Increment/Decrement program \n ";

    cin >> i;

        if (i == 1)

            {cout << "The temperature in Fahrenheit is: " << celsiusToFahrenheit() << endl;}

        if (i == 2)

            {cout << "The square of the number is: " << square() << endl;}

        if (i == 3)

            {sum();}

        if (i == 4)

            {tax();}

        if ( i == 5)

            {fraction();}

        if ( i == 6)

            {operators();}

        if (i > 6 || i < 1)

        {
            cout << " \a That is not a valid input." << endl;
        }

    cout << "\nWould you like to use another program? \n\nEnter y for YES or n for NO: ";

    cin >> ans;

        if (ans == 'y')

        {
        cont += 1;
        }
        if (ans == 'n')
        {
        cont = 0;
        }
    }
    return 0;
}
