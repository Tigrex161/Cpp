#include <iostream>
using namespace std;
int sum() {
int t, unit, ten, hundred, sum;


cout << "Enter a 3-digit number: " << endl;

cin >> t;

if ( t >= 100 && t <= 999)

{

    unit = t % 10;

    ten = (t / 10) % 10;


    hundred = t / 100;

    sum = unit + ten + hundred;

    cout << "The sum of the digits is: " << sum << endl;
}

else

    {

    cout << "I said a 3-digit number bro " << endl;

    }

return 0;

}
