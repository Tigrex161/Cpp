#include <iostream>
#include <string>
#include <cstdlib>
#include "fwddecs.h"

using namespace std;

int main()
{
	string employeename = "Taimur";
	string password = "1234";

	string password_check;
	string employeename_check;

	int count = 0;

	do {
		cout << "\n\t\t\t************************************" << endl << "\t\t\t Welcome To United Bank Limited(UBL)";
		cout << "\n\t\t\t************************************";
		cout << "\n\nEmployee Name:";
		cin >> employeename_check;
		cout << "Enter password:";
		cin >> password_check;


		if (employeename == employeename_check && password == password_check)
            {
                cout << "\n****Access Granted****\n\n";

                initialMenu();
            }
		if (count < 3)
		{
			system("cls");
			count++;
			cout << "\nAccess Denied\n";
			cout << "Invalid user name or password!\nTry Again:";
			cout << " You have failed " << count << " time(s)";
		}
		if (count == 3)
			{
			    system("cls");
			    cout << "Too many failed attempts. Exiting";
			    return 0;

            }
	}
	while (count != 0);
	return 0;
}
