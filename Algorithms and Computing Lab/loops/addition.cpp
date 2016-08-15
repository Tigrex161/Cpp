#include <iostream>
using namespace std;

int evenadd()
{
    int soe(0);
    int n1;
    int n2;

    do
    {
        cout << "Enter the first number: ";
        cin >> n1;
        cout << "Enter the second number: ";
        cin >> n2;
        if (n1 > n2)
        {cout << "\aPlease ensure first number is less than second." << endl;
        continue;}
    }
    while (n1 > n2);
    if (n1 % 2 == 0)
        {
        while (n1 <= n2)
            {
                soe = soe + n1;
                n1 += 2;
            }
        cout <<"The sum of even numbers is: " << soe;

        }
    if (n1 %2 != 0)
        {
            n1 = n1 + 1;
        while (n1 <= n2)
        {
        soe = soe + n1;
        n1 += 2;
        }
        cout << "The sum of even numbers is: " << soe;
        }

return 0;
}
