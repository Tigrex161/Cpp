#ifndef POLYNOMIAL_H
#define POLYNOIMAL_H
#include <vector>
#include <iostream>
using namespace std;

class polynomial
{
int degree;
std::vector<int> coeff;

public:
polynomial();
polynomial(const polynomial &a);
void getDegree() const;
polynomial add(const polynomial &a);
polynomial subtract(const polynomial &a);
polynomial multiply(const polynomial &a);
void display() const;
void setCoefficients();
int evaluate(int a) const;

};

#endif
