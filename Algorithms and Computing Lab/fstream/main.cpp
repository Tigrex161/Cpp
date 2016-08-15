#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void io1()
{
    ofstream file("data.txt");
    file << 13 << " Hello World";
    file.close();

    char buffer[81];


    ifstream outFile("data.txt");
    while (!outFile.eof())
    {
        outFile.getline(buffer,81);
        cout << buffer;
    }
    outFile.close();



}




void io2()
{
fstream file("data2.txt",ios::out);
file << 17 << " Hello world.";
file.close();

char buffer[81];
    fstream outFile("data2.txt",ios::in);

while (!outFile.eof())
{
    outFile.getline(buffer,81);
    cout << buffer;
}
outFile.close();

}



int employee()
{
    int c(0);
    char firstName[80];
    char lastName[80];
    char employeeID[80];
    char a;
ofstream inFile("edata.txt");
do
    {
    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your last Name: ";
    cin >> lastName;
    cout << "Enter your employee ID: ";
    cin >> employeeID;


    inFile << firstName << " ";
    inFile << lastName << ": ";
    inFile << employeeID << "\n";

    cout << "Would you like to enter more data? ";
    cin >> a;
    if (a=='y')
        ++c;
  }
while (a=='y');
inFile.close();

    ifstream outFile("edata.txt");
        char buffer[81];
            while (!outFile.eof())
                {
                    outFile.getline(buffer,81);
                    cout << buffer << "\n";
                }
    }


void me()
{
    ofstream inFile("me.txt");
    inFile << "My name is Taimur. \n";
    inFile << "I live in Rawalpindi. \n";
    inFile << "I study at NUST. \n";
    inFile.close();

        ifstream outFile("me.txt");
        char buffer[81];
        while(!outFile.eof())
        {
            outFile.getline(buffer,81);
            cout << buffer << "\n";
        }
        outFile.close();
}

int main()
{
    //io1();
    //io2();
    //employee();
    //me();
return 0;
}


