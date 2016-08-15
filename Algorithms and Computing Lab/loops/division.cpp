#include <iostream>

using namespace std;

int division()
{
    int ans = 1;
    while (ans == 1)
    {
    cout << "Enter the dividend: ";
    int dividend;
    cin >> dividend;
    cout << "Enter the divisor: ";
    int divisor;
    cin >> divisor;
    if (divisor == 0)
    {
        cout << "\aIllegal divisor!" << endl;
        continue;
    }
    int quotient;
    quotient = dividend/divisor;
    int remainder;
    remainder = dividend % divisor;
    cout << dividend << " divided by " << divisor << " results in a quotient of " << quotient << " and a remainder of: " << remainder << endl;
    cout <<"Do you want to do another calculation? Input 1 for yes and 0 for no: ";
    cin >> ans;
    if (ans == 1)
    continue;
    else
        break;
    }
    return 0;
}
