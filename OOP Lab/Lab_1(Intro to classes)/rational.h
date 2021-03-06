#ifndef RATIONAL
#define RATIONAL


class Rational
{
    int numerator;
    int denominator;

    public:
    Rational();
    Rational(int, int);
    void add(Rational);
    void subtract(Rational);
    void multiply(Rational);
    void divide(Rational);
    void printFrac();
    void printDec();
    int lCM(int, Rational);
    void convertToLowestTerms(int&, int&);
};


#endif
