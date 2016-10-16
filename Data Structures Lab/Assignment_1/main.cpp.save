#include <iostream>

using namespace std;

struct circle{

float radius;
float cf;

float circum()

{
return radius*2*3.142;
}

float diameter()
{
    return (radius*2);
}


bool compare(circle b)
{

if(cf==(b.cf))
return true;

else
return false;

}

void displayr()
{

cout << radius;

}




};


struct bankAccount{

int pinNum;
float balance;


void setBalance()
{
    cout << "Enter balance for this account: Rs " << endl;
    cin >> balance;
}

void showBalance()
{
    cout<< "Remaining balance: Rs " << balance << endl;

}

void setPinNumber()
{

cout << "Enter a 4-digit PIN to secure your account: ";

cin >> pinNum;
if(pinNum<999 || pinNum>9999)
{
do
{
int x(0);
cout << "Please enter a 4-digit PIN: ";
cin >> pinNum;
++x;
if(x==5)
{
cout << "Too many incorrect entries. Exiting.";
pinNum=0;
break;
}
}

while(pinNum < 999 || pinNum > 9999);

}

}


void changePinNumber()
{
    int temp;
    cout << "Enter your old PIN: ";
    cin >> temp;
if(temp != pinNum)
{
do
{
int x(5);
cout << "Please enter a valid 4-digit PIN: ";
cin >> temp;
++x;
if(x==5)
{
cout << "Too many incorrect entries. Exiting.";
break;
}
}
while(temp !=pinNum);
pinNum=temp;
}

if(temp == pinNum)
{
cout << "Enter your new PIN: ";
cin >> temp;


if(temp < 999 || temp > 9999)
{
do
{
int x(0);
cout << "Please enter a valid 4-digit PIN: ";
cin >> temp;
++x;
if(x==5)
{
cout << "Too many incorrect entries. Exiting.";
break;
}
}

while(temp < 999 || temp > 9999);
pinNum=temp;
cout << "Your new PIN is: " << pinNum;
}



}




}
};

void bankAccounts(bankAccount users[])
{
    int a;
    int x;
    do
    {
    cout << "Enter 1 to create an account or 2 to manage your account: ";
    cin >> a;

    static int i;

    if(a == 1)
    {
        users[i].setPinNumber();
        cout << endl;
        users[i].setBalance();
        cout << "Account successfully created. Your Account ID is " << i << endl;
        ++i;
    }






    if (a ==2)
    {
        int ID;
        int b;
        cout << "Enter your account ID: ";
        cin >> ID;

        cout << "Press 1 to see balance, 2 to change PIN or 3 to exit: ";
        cin >> b;
        if(b==1)
        {
        users[ID].showBalance();
        }

    if(b==2)
    {
    users[ID].changePinNumber();
    }

    if(b==3)
    cout << "GoodBye! ";

    }

    cout << "Press 1 to return to the main menu or 2 to exit: ";
    cin >> x;
}
while(x==1);

}


struct advert{
int adsShown;
float adsClicked;
float avgEarned;

void input()
{
cout << "Enter number of ads shown: ";
cin >> adsShown;

cout << "Enter %age of users who clicked on ads: ";
cin >> adsClicked;

cout << "Enter average amount earned per click: Rs ";
cin >> avgEarned;
}


};


float earnings(advert a)
{

    return (a.adsClicked*a.adsShown*a.avgEarned);

}


struct andGate{

bool input1;
bool input2;

void input(bool a, bool b)
{
input1=a;

input2=b;

}


void output()
{
    if (input1==1 && input2==1)
    cout << true;

    else
    cout << false;
}

void changeInput(int a)
    {
        if(a==1)

        input1= !input1;



        if(a==2)
        input2=!input2;

    }




};

struct orGate{

bool input1;
bool input2;

void input(bool a, bool b)
{
input1=a;

input2=b;

}


void output()
{
    if (input1==1 || input2==1)
    cout << true;

    else
    cout << false;
}

void changeInput(int a)
    {
        if(a==1)

        input1= !input1;



        if(a==2)
        input2=!input2;

    }




};

struct notGate{

bool input1;
bool input2;

void input(bool a)
{
input1=a;
}


void output()
{
    cout << !input1;
}

void toggleInput()
    {
        input1=!input1;

    }




};

int main()
{

/*circle a;
circle b;
a.radius = 5.0;
b.radius = 5.1;
a.cf = a.circum();
b.cf = b.circum();
cout << a.compare(b);
a.displayr();*/

/*bankAccount users[20];
bankAccounts(users);*/

/*advert monday;
monday.input();
cout << "You earned Rs " << earnings(monday) << " today.";*/


/*andGate gateA;
gateA.input(0,0);
gateA.output();
gateA.changeInput(2);
gateA.changeInput(1);
gateA.output();*/

/*orGate gateB;
gateB.input(0,0);
gateB.output();
gateB.changeInput(1);
gateB.output();*/


/*notGate gateC;
gateC.input(1);
gateC.output();
gateC.toggleInput();
gateC.output();*/


return 0;
}
