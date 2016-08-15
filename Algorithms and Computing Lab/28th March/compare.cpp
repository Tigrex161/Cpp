#include <iostream>
using namespace std;

int compare(int a, int b)
{
if (b > a)

    {

     int temp(0);
        a = temp;
        a = b;
        b = temp;
        cout << "The largest number is " << a;
        return 0;
    }
    if (a > b)
    {
        cout << "The largest number is " << a;
    return 0;
    }

    if (a == b)
    {
        cout << "The numbers are equal" ;
    }
return 0;
}

