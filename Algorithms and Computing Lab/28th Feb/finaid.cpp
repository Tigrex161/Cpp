#include <iostream>
#include "constants.h"
using namespace std;

int finance()
{
    using namespace rates;
    char resi, room;
    int bill;
    cout << "Enter your residential status. (I for in-state and O for out-of-state) ";
    cin >> resi;
    cout << "Do you require room and board? (Y for yes and N for no) ";
    cin >> room;
    if (resi == 'I' && room == 'Y')
    {
        bill = tistate + irnb;
        cout << "Your bill for this semester is $" << bill << endl;
    }
    if (resi == 'I' && room == 'N')
    {
        bill = tistate + ornb;
        cout << "Your bill for this semester is $" << bill <<  endl;
    }

    if (resi == 'O' && room == 'Y')
    {

      bill = tostate + irnb;
      cout << "Your bill for this semester is $" << bill << endl;
    }

    if (resi == 'O' && room == 'N')
    {
        bill = tostate + ornb;
        cout << "Your bill for this semester is $" << bill <<endl;
        }
        return 0;
    }
