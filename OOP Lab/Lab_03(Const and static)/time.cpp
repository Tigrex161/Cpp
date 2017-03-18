#include <iostream>
#include "time.h"
using namespace std;

time1::time1():hours(0),minutes(0),seconds(0)
{}

time1::time1(int a, int b, int c): hours(a), minutes(b), seconds(c)
{}


void time1::display() const
{
cout << hours << ":" << minutes << ":" << seconds;
}

time1 time1::add(time1 a)
{

a.hours += hours;
a.minutes += minutes;
a.seconds += seconds;

if(a.hours > 12)
{
a.hours = 0+(a.hours-12);
}

if(a.minutes >= 60)
{
a.hours +=1;
a.minutes -= 60;
}

if(a.seconds > 60)
{a.minutes += 1;
a.seconds-=60;}

return a;

}
