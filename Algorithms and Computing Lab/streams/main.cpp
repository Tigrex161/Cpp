#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void employee()
{
    char a;
    int c(0);

    struct EMPLOYEE
        {

            string firstName;
            string lastName;
            string employeeID;
        };

/*ofstream outFile("edata.dat");
do
    {
    static int serial = 0;
    EMPLOYEE user;
    cout << "Enter your First Name: ";
    cin >> user.firstName;
    cout << "Enter your last Name: ";
    cin >> user.lastName;
    cout << "Enter your employee ID: ";
    cin >> user.employeeID;
    ++serial;
    outFile << serial << ". ";
    outFile << user.firstName << " ";
    outFile << user.lastName << ": ";
    outFile << user.employeeID << "\n";
    cout << "Would you like to enter more data? ";
    cin >> a;
    if (a=='y')
        ++c;
  }
while (a=='y');
outFile.close();
*/

    string searchFile;
    /*String to be searched for in file. Should be unique as program isn't that robust.
    It searches for the string and returns the line where ever it encounters that string.
    e.g. If there are two entries with the name Taimur, both will be displayed
    So it's better to use a unique identifier like serial number/ID etc.*/
    cout << "Enter the serial number/ID etc.. of the employee: ";
    cin >> searchFile;
    ifstream inFile("backend.txt");
    string strData;

        while (getline(inFile,strData))
                    {
                        if( strData.find(searchFile) != string::npos )
                            //find() function searches for the string input in searchFile. string::npos means if string is not found
                            {
                                cout << strData << "\n" ;
                                break;
                                //The break statement allows only the first match to be displayed.
                                //Remove if multiple results are not an issue

                            }
                    }

    }



int main()
{
    employee();
}
