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

    if(d==0)
    {
        cout << "Zero cannot be entered as the denominator. It has instead been initialized to 1." << endl;
        denominator = 1;
    }
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
bool convertedD,convertedN;

if(firstNum < 0) //If the numerator is negative, the function does not operate correctly
                 //therefore it is multiplied by -1 to make it positive and then converted back to negative after the calculations are made.
    {
        firstNum *= -1;
        convertedN = true;
    }

if(secondNum < 0) //If the numerator is negative, the function does not operate correctly
                 //therefore it is multiplied by -1 to make it positive and then converted back to negative after the calculations are made.
    {
        secondNum *= -1;
        convertedD = true;
    }

Low_Value = (firstNum > secondNum) ? secondNum : firstNum;

High_Value = (firstNum > secondNum) ? firstNum  : secondNum;

for(int i = Low_Value; i > 0; i--)
    {
    if((Low_Value % i == 0) && (High_Value % i == 0))
        {
            firstNum = firstNum/i;
            secondNum = secondNum/i;

            if(convertedN)
            firstNum *= -1;

            if(convertedD)
            secondNum *= -1;
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

        convertToLowestTerms(numerator,denominator);
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

        convertToLowestTerms(numerator,denominator);

}


void Rational::multiply(Rational a)
{

        numerator = numerator * a.numerator;
        denominator = denominator * a.denominator;
        convertToLowestTerms(numerator,denominator);

}


void Rational::divide(Rational a)
{
        numerator *= a.denominator;
        denominator *= a.numerator;
        convertToLowestTerms(numerator,denominator);
}
