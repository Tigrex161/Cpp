#include <iostream>
using namespace std;
int calc()
{
    double n1,n2; // operands
    char op; //operator
    cout << "Enter the first number, operator and second number: ";
    cin >> n1 >> op >> n2;
    switch (op)
    {
        case '+': cout << "The sum is " << n1+n2;
         break;
        case '-': cout << "The difference is " << n1-n2;
         break;
        case '*': cout << "The product is " << n1*n2;
         break;
        case '/': cout << "The quotient is " << n1/n2;
         break;
    }
    return 0;
}
