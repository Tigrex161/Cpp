#include <iostream>
using namespace std;


int bill()
{
    int q1,q2,q3,q4,t/*total bill*/, avg/*avg bill per month*/, y/*year*/;
    cout << "Enter the year " << endl;
    cin >> y;
    cout << "Enter your water bill($) for the 1st quarter of " << y << endl;
    cin >> q1;
    cout << "Enter your water bill($) for the 2nd quarter of " << y << endl;
    cin >> q2;
    cout << "Enter your water bill($) for the 3rd quarter of " << y << endl;
    cin >> q3;
    cout << "Enter your water bill($) for the 4th quarter of " << y << endl;
    cin >> q4;
    t = q1+q2+q3+q4;
    avg = t / 12;
    cout << "Your average monthly bill for " << y << " is "  << avg << "$" << endl;
    if (avg > 75 )
    {
        cout << "Penchood kam mara kar #iykwim ";
    }
    if (avg > 25 && avg < 75 )
    {
        cout << "Penchood abhi bhi zyada hai ";
    }
    if (avg < 25)
    {
        cout << "Mai aik hakeem ko janta hun ";
    }
return 0;
}
