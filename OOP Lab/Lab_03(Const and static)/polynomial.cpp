#include <iostream>
#include "polynomial.h"
#include <vector>
#include <cmath>
using namespace std;

polynomial::polynomial()
{
degree = 1;
coeff.resize(degree);
coeff[0] = 0;
}

polynomial::polynomial(const polynomial &a)
{

degree = a.degree;
coeff.resize(degree+1);
for(int i = 0; i < degree; ++i)
    {
        coeff[i] = a.coeff[i];
    }

}


void polynomial::setCoefficients()
{
cout << "Enter the degree of the polynomial: ";
cin >> degree;
coeff.resize(degree+1);
cout << "Enter the coefficients, starting from smallest degree: " << endl;
for(int i = 0; i <= degree; ++i)
cin >> coeff[i];
}


void polynomial::getDegree() const
{
cout << "Degree of the polynomial is: " << degree << endl;
}

polynomial polynomial::add(const polynomial &a)
{
polynomial result;
int highestDeg(1);
bool y(false);

if(a.degree > degree)
    {
    highestDeg = a.degree;
    }
if(a.degree < degree)
    {
    highestDeg = degree;
    }

if(a.degree == degree)
    {
        highestDeg = degree;
        y = true;
    }

result.degree = highestDeg;
result.coeff.resize(highestDeg+1);

for(int i = 0; i <= highestDeg; ++i)
{

    if(y)
        {
            result.coeff[i] = a.coeff[i]+coeff[i];
        }

    else
        {
            if(a.coeff[i]!= 0 && coeff[i]!= 0)
                result.coeff[i] = a.coeff[i]+coeff[i];

            else
                {
                  if(a.coeff[i] == 0)
                    result.coeff[i] = coeff[i];
                  if(coeff[i] == 0)
                    result.coeff[i] = a.coeff[i];
                }
        }
}

return result;
}


polynomial polynomial::subtract(const polynomial &a)
{
polynomial result;
int highestDeg(1);
bool y(false);

if(a.degree > degree)
    {
    highestDeg = a.degree;
    }
if(a.degree < degree)
    {
    highestDeg = degree;
    }

if(a.degree == degree)
    {
        highestDeg = degree;
        y = true;
    }

result.degree = highestDeg;
result.coeff.resize(highestDeg+1);

for(int i = 0; i <= highestDeg; ++i)
{

    if(y)
        {
            result.coeff[i] = coeff[i]-a.coeff[i];
        }

    else
        {
            if(a.coeff[i]!= 0 && coeff[i]!= 0)
                result.coeff[i] = coeff[i]-a.coeff[i];

            else
                {
                  if(a.coeff[i] == 0)
                    result.coeff[i] = coeff[i];
                  if(coeff[i] == 0)
                    result.coeff[i] = -(a.coeff[i]);
                }
        }
}

return result;
}


polynomial polynomial::multiply(const polynomial &a)
{

polynomial result;
int maxDeg(1);

result.degree = degree + a.degree;
maxDeg = degree + a.degree;
result.coeff.resize(maxDeg+1);

for (int i = 0; i <= maxDeg; i++)
                result.coeff[i] = 0;

for(int i = 0; i <= degree; ++i)
{
            for(int j = 0; j <= a.degree; ++j)
                result.coeff[i+j] += coeff[i]*a.coeff[j];

}

return result;
}


int polynomial::evaluate(int a) const
{
int x(0);
for(int i = 0; i <=degree; ++i)
{

x += coeff[i]*(pow(a,i));

}

cout << "The value for this input is: " << x;
return x;
}

void polynomial::display() const
{
int temp = degree;
cout << "The polynomial is: ";
for(int i = degree; i >= 0; --i)
{
if(temp == 0)
    cout << "(" << coeff[i] << ")";
else
    cout << "(" << coeff[i] << "x^" << temp << ")" << " + ";
--temp;
}
}
