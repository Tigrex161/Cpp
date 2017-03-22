#include <iostream>
#include "account.h"
using namespace std;

Account::Account()
{
    balance = 0;
    cout << "Account balance initialized with: 0" << endl;
}

Account::Account(int x)
{
    if (x >= 0)

       { balance = x;
        cout << "Account balance initialized with " << x << endl;}


    else
    cout << "Balance cannot be negative, it was initialized with zero instead." << endl;
    balance = 0;
}


void Account::credit(int a)
{
balance += a;
cout << "Amount credited." << " ";
getBalance();
}

void Account::debit(int b)
{

if(b <= balance && b > 0)
{
balance -= b;
cout << "Amount withdrawn. ";
getBalance();
}

else
cout << "You cannot withdraw more than the balance in your account." << endl;

}

const int& Account::getBalance()
{
cout << "Current balance of this account is: " << balance << endl;
return balance;
}
