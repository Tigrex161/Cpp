#include <iostream>
using namespace std;

int decision()
{
    int avg;
    cout << "Enter the student's average(%) ";
    cin >> avg;
    if (avg > 60)
    {
        cout << "You Passed!" <<endl;
    }
    else
    {
        cout << "You shall not pass!" << endl;
    }
return 0;
}
