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
cout << "Enter the denominator: ";
cin >> denom;
}

void multiply(fraction b)
{
 cout << "The product is: " << (static_cast<double>(((num*b.num)))) / (static_cast<double>((denom*(b.denom))));
}
};

struct circle{

float radius;
float cf;

float circum()
{
return radius*2*3.142;
}

float diameter()
{
    return (radius*2);
}

bool compare(circle b)
{

if(cf==(b.cf))
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

a.multiply(b);*/


circle a;
circle b;
a.radius = 5.0;
b.radius = 5.1;
a.cf = a.circum();
b.cf = b.circum();
cout << a.compare(b);

    return 0;
}
