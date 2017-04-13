#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class customer{

public:
string name;
string accNum;
int balance;

customer():name("J"),accNum("0000"),balance(0)
{}

void setDetails(){
cout << "Enter name: " <<endl;
cin >> name;
cout << "Enter accounte number: " <<endl;
cin >> accNum;
cout << "Enter balance: " <<endl;
cin >> balance;
};


};


void write(customer a)
{

fstream x;
x.open("accounts.txt", ios_base::out | ios_base::in | ios_base::app);

x << a.name << " " << a.accNum << " " << a.balance << endl;

x.close();
}


void read(customer &a, int d)
{
string b;
string c;
fstream y;

y.open("accounts.txt", ios_base::out| ios_base::in);

for(int i =0; i < d; ++i)
{
getline(y, b, '\n');

//getline(y, c, ' ');
}

cout << b << endl;
cout << c << endl;
y.close();
}


int main()
{
    customer accounts[100];
    //accounts[0].setDetails();
    //accounts[1].setDetails();
    //write(accounts[0]);
    //write(accounts[1]);
    read(accounts[0],2);
    //read(accounts[1], 1);

    return 0;
}
