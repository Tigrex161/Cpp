#include <iostream>
#include "rational.h"
using namespace std;


Rational::Rational()
{
numerator = 1;
denominator = 1;
cout << "Initialized. ";
printFrac();
}


Rational::Rational(int n = 1, int d = 1)
{
    numerator = n;
    denominator = d;
    cout << "Initialized. ";
printFrac();

}


void Rational::printDec()
{
cout << "The decimal value of the fraction is: " << ((static_cast<float>(numerator))/(static_cast<float>(denominator))) << endl;
}


void Rational::printFrac()
{
    cout << "Fraction: " << numerator << "/" << denominator << endl;
}


int Rational::lCM(int a, Rational b)
{
a = denominator;
int c = b.denominator;

int maximum;
// maximum value between a and c is stored in max
    maximum = ((a > c) ? a : c);

    do
    {
        if (maximum % a == 0 && maximum % c == 0)
        {
            cout << "LCM = " << maximum << endl;
            break;
        }
        else
            ++maximum;
    } while (true);

return maximum;
}


void Rational::convertToLowestTerms(int &firstNum, int &secondNum)
{
int Low_Value, High_Value;

if(firstNum > secondNum)
{
Low_Value = secondNum;
High_Value = firstNum;
}
else
{
High_Value = secondNum;
Low_Value = firstNum;
}

for(int i = Low_Value; i > 0;i--)
{
if((Low_Value % i == 0) && (High_Value % i == 0))
{
firstNum = firstNum/i;
secondNum = secondNum/i;
break;
}
}
}



void Rational::add(Rational a)
{
    cout << "Addition: " << endl;
    printFrac();
    a.printFrac();

    if(denominator == a.denominator)
    {
        numerator += a.numerator;
    }

    else
    {       int temp;
            int temp2;
            temp = lCM(denominator, a);
            temp2 = temp/denominator;
            denominator *= temp2;
            numerator *= temp2;
            temp2 = temp/(a.denominator);
            a.numerator *= temp2;

                numerator += a.numerator;
    }
            if(numerator < 0 && numerator%denominator == 0)
        {
            numerator = -1;
            denominator = 1;
        }
        if(numerator > 0 && numerator%denominator == 0)
        {
            numerator = 1;
            denominator = 1;
        }
        if(numerator == 0)
        {
        denominator = 0;
        }

        if(numerator > denominator || numerator < denominator)
        {
        convertToLowestTerms(numerator,denominator);
        }

}

void Rational::subtract(Rational a)
{
    cout << "Subtraction: " << endl;
    printFrac();
    a.printFrac();

    if(denominator == a.denominator)
    {
        numerator -= a.numerator;
    }

    else
    {       int temp;
            int temp2;
            temp = lCM(denominator, a);
            temp2 = temp/denominator;
            denominator *= temp2;
            numerator *= temp2;
            temp2 = temp/(a.denominator);
            a.numerator *= temp2;

                numerator -= a.numerator;
    }

        if(numerator < 0 && numerator%denominator == 0)
        {
            numerator = -1;
            denominator = 1;
        }
        if(numerator > 0 && numerator%denominator == 0)
        {
            numerator = 1;
            denominator = 1;
        }
        if(numerator == 0)
        {
        denominator = 0;
        }

        if(numerator > denominator || numerator < denominator)
        {
        convertToLowestTerms(numerator,denominator);
        }


}


void Rational::multiply(Rational a)
{

        numerator *= a.numerator;
        denominator *= a.denominator;
        convertToLowestTerms(numerator,denominator);

}


void Rational::divide(Rational a)
{

        numerator *= a.denominator;
        denominator *= a.numerator;
        convertToLowestTerms(numerator,denominator);

}
