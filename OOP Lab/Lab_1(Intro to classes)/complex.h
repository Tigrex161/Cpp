#ifndef COMPLEX
#define COMPLEX

class complex1
{

int real;
int imag;

public:
complex1();

complex1(int, int);

void setComplex(int, int);

void add(complex1);

void mag();

void multiply(complex1);

void display();

};
#endif
