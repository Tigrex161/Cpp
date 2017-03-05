#include <iostream>
using namespace std;

 long hmstosec(int h, int m, int s)
{
    h *= 3600;
    m *= 60;
    long seconds;
    seconds = h+m+s;
    cout << "The time in seconds is " << seconds;
    return 0;
}
