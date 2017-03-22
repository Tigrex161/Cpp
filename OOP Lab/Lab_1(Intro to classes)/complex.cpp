#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;


complex1::complex1()
{

real = 1;
imag = 1;

}

complex1::complex1(int a, int b)
{
    real = a;
    imag = b;
}

void complex1::setComplex(int a, int b)
{
cout << "Enter the real part: ";
cin >> a;
real = a;
cout << "Enter the imaginary part: ";
cin >> b;
imag = b;
}

void complex1::add(complex1 b)
{
    cout <<"The result is: "<< (real+b.real) << "+" << (imag+b.imag) << "i" << endl;
}


void complex1::mag()
{
cout <<"The magnitude is: " << sqrt((pow(real,2)+pow(imag,2))) << endl;
}


void complex1::multiply(complex1 b)
{
   complex1 temp1;
   temp1.real = (real*b.real) - (imag*b.imag);
   temp1.imag = (real*b.imag) + (imag*b.real);
   cout << "The product is: " << temp1.real << "+" << temp1.imag << "i"<< endl;
}


void complex1::display()
{
    cout << "The complex number you entered is: " <<  real << "+" << imag << "i" << endl;
}
