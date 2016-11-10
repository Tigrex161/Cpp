#include <iostream>
#include <cmath>
using namespace std;

struct LINE;

struct POINT{

float x;
float y;

POINT(){
x = 0;
y = 0;
}

void input(){
cout << "Enter x-coordinate: ";
cin >> x;

cout << "Enter y-coordinate: ";
cin >> y;
}

void output()
{
cout << "The x-coordinate is: " << x << endl;
cout << "The y-coordinate is: " << y << endl;
}

float distance(POINT a);

bool isZero()
{

if (x==0 && y==0)
return 1;

else
return 0;
}

POINT middlePoint(POINT b)
{
    POINT mid;

    mid.x =((x+b.x)/2);
    mid.y = ((y+b.y)/2);
    return mid;
}

bool isEqualTo(POINT c)
{
    if(x==c.x && y == c.y)
    return 1;

    else
    return 0;
}

bool isGreaterThan(POINT d)
{

    float d1;
    float d2;
    POINT u;
    u.x = x;
    u.y = y;
    POINT origin;
    d1 =  u.distance(origin);
    d2 =  d.distance(origin);

    if (d1>d2)
    return 1;
    if (d1<=d2)
    return 0;
}




};


struct LINE{

POINT a;
POINT b;
float length;

friend float POINT::distance(POINT a);

float len()
{
 return a.distance(b);
}

bool compare(LINE a)
{

    if (length < a.length)
    return 1;

    else
    return 0;
}

};

float POINT::distance(POINT a)
{
float temp;

temp = sqrt(pow((a.x-x),2) + pow((a.y-y),2));
return temp;
}

int main()
{
LINE l1;
LINE l2;
l1.a.input();
l1.b.input();
l2.a.input();
l2.b.input();

l1.length = (l1.a).distance((l1.b));
l2.length = (l2.a).distance((l2.b));

return 0;
}
