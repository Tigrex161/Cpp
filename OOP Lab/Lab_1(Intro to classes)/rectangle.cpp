#include "rectangle.h"
#include <iostream>
#include <cassert>

using namespace std;
Rectangle::Rectangle()
{
    cout << "Length initialized with default value: " << length << endl;

    cout << "Width initialized with default value: " << width << endl;
}



Rectangle::Rectangle(double x, double y)
{
    length = x;
    cout << "Length initialized with value: " << x << endl;
    width = y;
    cout << "Width initialized with value: " << y << endl;
}

double Rectangle::area()
{
        cout << "The area of the rectangle is: " << length*width << endl;
        return (length*width);
}


double Rectangle::perimeter()
{
        cout << "The perimeter of the rectangle is: " << (2*(length+width)) << endl;
        return (2*(length+width));

}


void Rectangle::setLength(double a)
{
/*double a;
cout << "Enter the new length: ";
cin >> a;
*/
assert(a>0 && a<21);
{
length = a;
}
}

void Rectangle::setWidth(double b)
{
/*
double b;
cout << "Enter a new width: ";
cin >> b;
*/
assert(b>0 && b<21);
width = b;
}

const double& Rectangle::getLength()
{
cout << "The length is: " << length << endl;
return length;
}

const double& Rectangle::getWidth()
{
cout << "The width is: " << width << endl;
return width;
}
