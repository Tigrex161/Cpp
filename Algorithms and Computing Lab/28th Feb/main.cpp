#include <iostream>
#include "fwddecs.h"
#include "constants.h"
using namespace std;

int main()
{
    int i;
    int cont{1};
    char c;
    while (cont >= 1)
{
    cout << "Enter\n1 for comparison function\n2 for Pass or fail function\n3 for Water bill function\n4 for University bill function ";
    cin >> i;
    if(i==1)
    {cout << comparison() << endl;}
    if(i==2)
    {cout << decision() << endl;}
    if(i==3)
    {cout << bill() << endl;}
    if(i==4)
    {cout << finance() << endl;}

    cout << "Would you like to use another program? ";
    cin >> c;
    if (c =='Y')
    {
        cont += 1;
    }
    if (c == 'N')
    {
        cont = 0;
        return 0;
    }
}
}
