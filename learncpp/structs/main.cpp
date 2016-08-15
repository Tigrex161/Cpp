#include <iostream>

using namespace std;

struct Fraction
{
    int num;
    int den;
};

void multiply(Fraction x, Fraction y)
{
    float n1;
    float n2;
    n1 = x.num*y.num;
    n2 = x.den*y.den;
    cout << "The value when they are multiplied is: " << (n1/n2);
}

/*struct Advertising
    {
        int nAd;
        int pUser;
        int aEarn;
    };*/

/*void earning(Advertising x)
{
   cout << "Number of ads: " << x.nAd << endl;
   cout << "Percentage of user clicks: " << x.pUser << endl;
   cout << "Average earning per ad clicked: " << x.aEarn << endl;
   int t;
   t = x.nAd*x.pUser*x.aEarn;
   cout << "Total revenue: " << t << endl;
}*/



int main()
{

   /* Advertising x;
    cout << "Enter number of ads: ";
    cin >> x.nAd;
    cout << "Enter percentage of user clicks: ";
    cin >> x.pUser;
    cout << "Enter average earning per ad clicked: ";
    cin >> x.aEarn;

    earning(x);*/

 Fraction f1;
 Fraction f2;
 char a;
 a = '/';
 cout << "Enter first fraction (x/y): ";
 cin >> f1.num >> a >> f1.den;
 cout << "Enter second fraction (x/y): ";
 cin >> f2.num >> a >> f2.den;

 multiply(f1,f2);

    return 0;
}
