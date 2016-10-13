#include <iostream>
#include <cmath>
using namespace std;

struct complex1{
int real;
int imag;
};


void input(complex1 &c)
{
cout << "Enter the real part: ";
cin >> c.real;
cout << "Enter the imaginary part: ";
cin >> c.imag;
}

void add(complex1 a,complex1 b)
{
    cout <<"The result is: "<< (a.real+b.real) << "+" << (a.imag+b.imag) << "i" << endl;
}


void mag(complex1 d)
{
cout <<"The magnitude is: " << sqrt((pow(d.real,2)+pow(d.imag,2))) << endl;
}


void multiply(complex1 a, complex1 b)
{
   complex1 temp1;
   temp1.real = (a.real*b.real) - (a.imag*b.imag);
   temp1.imag = (a.real*b.imag) + (a.imag*b.real);
   cout << "The product is: " << temp1.real << "+" << temp1.imag << "i"<< endl;
}


void display(complex1 a)
{
    cout << "The complex number you entered is: " <<  a.real << "+" << a.imag << "i" << endl;
}





struct fraction
{
int num;
int denom;
void input()
{
cout << "Enter the numerator: ";
cin >> num;
cout << "Enter the denomintor: ";
cin >> denom;
}

void multiply()
{
 cout << "The product is: " << (static_cast<double>((num*num))) / (static_cast<double>((denom*denom)));
}
};





struct circle{

float radius;

void circum()
{
cout << radius*2*3.142;
}

void diameter()
{
    cout << radius*2;
}

bool compare(circle a, circle b)
{
if((circum(a))==(circum(b)))
return true;

else
return false;

}


};





int main()
{
    /*complex1 a;
    complex1 b;
    input(a);
    input(b);
    add(a,b);
    mag(a);
    multiply(a,b);
    display(a);*/


 /*fraction a;
 fraction b;


    a.input();
    b.input();

(a,b).multiply();*/


circle a;
circle b;
a.radius = 5;
b.radius = 5;
(a,b).compare();





    return 0;
}
