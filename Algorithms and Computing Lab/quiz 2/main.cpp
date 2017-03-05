#include <iostream>

using namespace std;

int interchange(int y, int x)
{
    cout << "x is now " << x <<endl;
    cout << "y is now " << y;
    return 0;
}
int main()
{
    cout << "Enter 1st number: " << endl;
    int x;
    cin >> x;
    cout << "Enter 2nd number: "<< endl;
    int y;
    cin >>y;
    interchange(x,y);
    return 0;
}
