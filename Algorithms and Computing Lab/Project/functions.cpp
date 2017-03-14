#include <iostream>
#include <cstdlib>
#include <string>
#include "fwddecs.h"
#include "global.h"


using namespace std;

void initialMenu()
{
	int userChoice;
	cout << "\n1:Customers Management\n2:Accounts Management\n3:Quit\n";
	cin >> userChoice;
	switch (userChoice) {
	case 1: {
		customerManagement();      //Calls The Function For Customer Management
		break;
	}
	case 2: {
		accountManagement();      //Account Management
		break;
	}
	case 3: {
		exit(0);          //Quit/Exit
	}
	default: {
		cout << "INCORRECT OPTION";
		initialMenu();
	}
	}
}

void customerManagement()
{
	int userChoice;
	cout << "\n1:Add Customer\n2:Display List Of Customers\n3:Return to previous menu\n";
	cin >> userChoice;
	switch (userChoice) {
	case 1: {
		addcustomer();       //Calls a function to add a customer
		break;
	}
	case 2: {
		listofcustomers();   //Calls a function to display all customers
		break;
	}
	case 3: {
		initialMenu();       //Return to previous menu
		break;
	}
	default: {
		cout << "INCORRECT OPTION";
		customerManagement();
	}
	}
}


void addcustomer()
{
	int u(0);
	do
	{
		int k = 0;


                cout << "Customer ID: ";
                cin >> id1[custID];

                while(cin.fail())
                        {
                            cout << "Error, please enter a number: ";
                            cin.clear();
                            cin.ignore(32767,'\n');
                            cin >> id1[custID];
                        }


        for (int i = 0; i < 50; i++)
		{

			if (custID != i)

            {
                if (id1[custID] == id1[i])
				{
					cout << "ID already exists.\n";
					cout << "Enter again.\n";
					k++;
					break;

				}
            }
		}
		if (k == 0)
			break;

	}
	while (u == 0);
	cout << "Customer Name:";
	cin >> name[custID];
	cout << "Account is added.\n";
    ++custID;

	customerManagement();
}

void listofcustomers()
{
    cout << "CustomerID\t\tCustomer Name\t\tCurrent Balance(PKR)" << endl;
	for (int k = 0; k<50; k++) {
		if (id1[k] != 0)
		{
			cout << id1[k] << "\t\t\t" << name[k] << "\t\t\t" << account[k] << endl;
		}
	}
	customerManagement();        //To Go Back To Customer Management Menu
}



void accountManagement()
{
	int userChoice;
	cout << "\n1:Deposit\n2:Withdraw\n3:Transfer\n4:Return to previous menu\n";
	cin >> userChoice;
	switch (userChoice) {
	case 1: {
		deposit();            //Calls The Function For Deposit
		break;
	}
	case 2: {
		withdraw();        //Calls The Function For Withdraw
		break;
	}
	case 3: {
		transfer();        //Calls The Function For Transfer
		break;
	}
	case 4: {
		initialMenu();       //Returns To Main Menu
		break;
	}
	default: {
		cout << "INCORRECT OPTION";
		accountManagement();
	}
	}
}

void deposit()
{
	int id;
	int accountExists = 0;
	float balance;
	cout << "Enter The CustomerID :";
	cin >> id;
	for (int i = 0; i < 50; i++)
	{
		if (id == id1[i])
		{
			accountExists++;
			cout << "Enter The Amount Of Money : PKR ";
			cin >> balance;
			cout << "Your previous balance was:" << account[i] << "\n";
			account[i] += balance;
			cout << "Your new balance is:" << account[i] << "\n";
			cout << "\n\n\tFunds deposited successfully! \n";
		}
	}
	if (accountExists == 0)
		cout << "Account does not exist.\n";
	accountManagement();
}

void withdraw()
{
	int id;
	int accountExists = 0;
	float withdraw;
	cout << "Enter The CustomerID :";
	cin >> id;
	for (int i = 0; i < 50; i++)
	{
		if (id == id1[i])
		{
			accountExists++;
			cout << "Enter The Amount Of Money you want to Withdraw : PKR ";
			cin >> withdraw;
			cout << "Your previous balance was:" << account[i] << "\n";
			account[i] -= withdraw;
			if (account[i] < 0)
			{
				cout << "You don't have enough balance.";
				account[i] += withdraw;
				accountManagement();
			}
			else
			{
				cout << "Your new balance is:" << account[i] << "\n";
				cout << "\n\n\tFunds have been withdrawn from your account. \n";
				accountManagement();
			}
		}
	}
	if (accountExists == 0)
		cout << "Account does not exist.\n";
	accountManagement();
}

void transfer()
{
	int sID, rID;
	float transfer, p, q, r, s;
	int rec = 0, sen = 0;//Check if receiver/sender accounts exist
	int senderLocation = 0, receiverLocation = 0;
	int senderBalance = 0, receiverBalance = 0;
	cout << "Enter Sender's CustomerID :";
	cin >> sID;
	for (int i = 0; i < 50; i++)
	{
		if (sID == id1[i])
		{
			cout << "Available Balance In Sender's Account: PKR " << account[i] << "\n";
			senderLocation = i;
			senderBalance = account[i];
			rec++;
		}
	}
	if (rec == 0)
	{
		cout << "Account does not exist.\n";
		accountManagement();
	}
	cout << "Enter Receiver's CustomerID :";
	cin >> rID;
	for (int i = 0; i < 50; i++)
	{
		if (rID == id1[i])
		{
			cout << "Current balance in this account:" << account[i] << "\n";
			receiverLocation = i;
			receiverBalance = account[i];
			sen++;
		}
	}
	if (sen == 0)
	{
		cout << "Account does not exist.\n";
		accountManagement();
	}
	cout << "Enter The Amount To Be Transferred :PKR ";
	cin >> transfer;
	p = senderBalance;
	q = receiverBalance;
	if (transfer > p)
	{
		cout << "Transaction Not Possible Due To Insufficient Balance In Sender's Account\n";
	}
	else
	{
		r = p - transfer;
		s = q + transfer;
		cout << "Amount Successfully Transferred.\n";
		senderBalance = r;
		receiverBalance = s;
		account[senderLocation]=senderBalance;
		account[receiverLocation]=receiverBalance;
		cout << "\n\nSender's New Balance is: PKR" << senderBalance << "\n";
		cout << "\nReceiver's New Balance Is: PKR " << receiverBalance <<"\n";
	}


	accountManagement();
}

