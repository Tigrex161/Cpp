#include <iostream>

using namespace std;

/*int swap(int &a,int &b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;
}

int triplebyval(int x)
{
    x *= 3;
    return x;
}

int triplebyref(int &x)
{
    x *= 3;
}

float area(float a)
{
    float area = 2 * 3.142 * (a*a);
    return area;
}

float area (float a, float b)
{
    float area = a*b;
    return area;
}*/

/*double maximum(double a=0,double b=0,double c=0)
{
    if (a>b && a>c)
        return a;
    if (b>a && b>c)
        return b;
    if (c>a && c>b)
        return c;
}*/

int rectangleArea(int h, int l=9, int w=7)
{
    int area;
    area = l*w*h;
    return area;
}




int main()
{
/* cout << "Enter x: ";
 int x;
 cin >> x;
 cout << "Enter y: ";
 int y;
 cin >> y;
swap(x,y);
cout << "x is now: " << x<<"\n";
cout << "y is now: "<< y;*/

/*int count(4);
cout << "Function triplebyval returned: " << triplebyval(count) << " but count's value is still: " << count <<"\n";
triplebyref(count);
cout << "Function triplebyref has updated count's value to: " << count;*/

/*cout << "Enter the radius of the circle: ";
float r;
cin >> r;

cout << "Enter the length of the rectangle/square: ";
float l;
cin >> l;
cout << "Enter the width of the rectangle/square: ";
float w;
cin >> w;
cout << "The circle's area is: " << area(r) << "\n";
cout << "The square/rectangle's area is: " << area(l,w)<<"\n";*/

/*cout << "Enter 3 numbers: ";
double a,b,c;
cin >> a>>b>>c;
cout << "The largest of the three inputs is: " << maximum(a,b,c);*/

cout << "Enter height of rectangle: ";
int h;
cin >> h;
cout << "Area is: " << rectangleArea(h);


return 0;
}
