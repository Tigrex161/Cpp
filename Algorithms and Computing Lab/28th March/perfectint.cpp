#include <iostream>
using namespace std;
int divisor(0);

int isPerfect(int a)
{
int temp(0);
int sum(0);

 for (int i(1); i < a; ++i)
{
    if ((a%i) == 0)
     {
        sum += i;
        temp = divisor;
        divisor = i;
     }
    else
     {
        continue;
     }

}

    if (sum == a)
{

    cout << a << " is a perfect integer,";
    cout << " as its divisors are: " << endl;
        for (int j =1; j < a ; j++)
        {
            if (a%j==0)
            {
                cout << j << " " << "\n";
            }
        }

}
    if (sum != a)
{
    return 0;
}
return 0;
}
