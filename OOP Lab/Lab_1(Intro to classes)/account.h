#ifndef ACCOUNT
#define ACCOUNT

class Account
{

int balance;

public:
Account();
Account(int);
void credit(int);
void debit(int);
const int& getBalance();

};

#endif
