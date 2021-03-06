#include <iostream>
#include <cmath>
using namespace std;

struct polynomial{

int degree;
int *poly = new int[degree];

polynomial()
{
    degree = 0;
}


void input()//Takes a polynomial coefficents as input
{
    cout << "Enter the degree of the polynomial: ";
    cin >> degree;
    int x = degree;
    for(int i = degree; i >= 0; --i)
    {
    cout << "Enter coefficient of x" << "^" << i << ": ";
    cin >> poly[i];
    --x;
    }

}

int* addP(polynomial &b)//Adds two polynomials and displays/returns the result
{

    if (degree < b.degree)
        {
            int *temp = new int[b.degree];

            for(int i = b.degree; i >= 0; --i)
            {
                temp[i] = poly[i]+(b.poly[i]);

            }

            for (int i = 0; i <= b.degree;++i)
            {
                cout << temp[i];
                if(i!=0)
                cout << "x^" << i;
                if (i != b.degree)
                cout << " + ";
            }
            return temp;
            delete[] temp;
            temp=nullptr;
        }


    if (degree >= b.degree)
        {
            int *temp = new int[degree];

            for(int i = degree; i >= 0; --i)
            {
                temp[i] = poly[i]+(b.poly[i]);

            }

            for (int i = 0; i <= degree;++i)
            {
                cout << temp[i];
                if(i!=0)
                cout << "x^" << i;
                if (i != degree)
                cout << " + ";
            }
            return temp;
            delete[] temp;
            temp=nullptr;
        }
    return 0;
}


int* subP(polynomial &b)//Subtracts two polynomials and displays/returns the result
{

    if (degree < b.degree)
        {
            int *temp = new int[b.degree];

            for(int i = b.degree; i >= 0; --i)
            {
                temp[i] = poly[i]-(b.poly[i]);

            }

            for (int i = 0; i <= b.degree;++i)
            {
                cout << temp[i];
                if(i!=0)
                cout << "x^" << i;
                if (i != b.degree)
                cout << " + ";
            }

            return temp;
            delete[] temp;
            temp=nullptr;
        }


    if (degree >= b.degree)
        {
            int *temp = new int[degree];

            for(int i = degree; i >= 0; --i)
            {
                temp[i] = poly[i]-(b.poly[i]);

            }


            for (int i = 0; i <= degree;++i)
            {
                cout << temp[i];
                if(i!=0)
                cout << "x^" << i;
                if (i != degree)
                cout << " + ";
            }
            return temp;
            delete[] temp;
            temp=nullptr;
        }
    return 0;
}


int* multP(polynomial &b)//Multiplies two polynomials and displays/returns the product
{
        int newDegree = degree+b.degree;

        int *prod = new int[newDegree-1];
        for(int i = 0; i <= (newDegree-1); ++i)
            {
                prod[i]=0;
            }

        for (int i = 0; i <= degree; ++i)
            {
                for (int j = 0; j <= b.degree; ++j)
                    {
                        prod[i+j] += (poly[i])*(b.poly[j]);


                    }
            }

        for (int i =0; i<=newDegree-1;++i)
            {
                cout << prod[i];
                if(i!=0)
                cout << "x^" << i;
                if (i != newDegree-1)
                cout << " + ";
            }
            return prod;
            delete[] prod;
            prod=nullptr;
}


int evalP() //Returns evaluated value of polynomial. Possible to use different data type in order to increase computation of larger polynomials.
{
    int j(0);
    int a(0);

    cout << "Enter the constant value at which you wish to evaluate the polynomial: ";
    cin >> a;

    for(int i = 0; i <= degree; ++i)
        {
            if(i==0)
            j += (poly[i]);
            else
            j += (poly[i])*pow(a,i);
        }

    cout << "The value of the polynomial when x = " << a << " is: " <<j;
    return j;
}

void rootsP() //Displays roots of a 2nd degree polynomial
{
    double root1(0);
    double root2(0);
    double a = poly[2];
    double b = poly[1];
    double c = poly[0];

    root1 = ((-b) + sqrt((pow(b,2)) - (4*a*c)))/2*a;
    root2 = ((-b) - sqrt((pow(b,2)) - (4*a*c)))/2*a;

    cout << "Root 1 is: " << root1 << endl;
    cout << "Root 2 is: " << root2 << endl;
}


~polynomial()
{
delete[] poly;
poly=nullptr;
}


};






int main()
{
    polynomial a;
    polynomial b;
    a.input();
    b.input();
    a.addP(b);
    a.subP(b);
    a.multP(b);
    a.evalP();
    a.rootsP();


    return 0;
}
