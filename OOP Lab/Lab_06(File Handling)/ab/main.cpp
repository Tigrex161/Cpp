#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student{

string name;

public:

Student()
{
cout << "Enter name: " << endl;
cin >> name;
}

friend void operator<<(fstream &n, const Student &a)
{
	n.open("student.txt", ios_base::out | ios_base::in);
	n << a.name;
    n.close();
}



};

int main()
{

Student one;
fstream x;

x << one;


return 0;
}
