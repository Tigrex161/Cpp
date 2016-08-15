#include <iostream>

using namespace std;

int main()
{
    double one;
    double two;
    char op;
    cout<<"Enter first double: ";
    cin >> one;
    cout << "Enter second double: ";
    cin >> two;
    cout << "Enter one of the following: +, - , * or / ";
    cin >> op;

    if (op == '+'){
        cout << "The answer is " << one + two;
    }
    if (op == '-'){
        cout << "The difference is " << one - two;
    }
    if (op == '*'){
        cout << "The product is " << one * two;
        }
    if (op == '/'){
        cout << "The quotient is " << one / two;
    }

    else {cout<< "Invalid operator";}
    return 0;
}
