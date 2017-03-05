#include <iostream>

using namespace std;

int ascii()
{
    int c = 0;
    char a;
    do  {
            a = static_cast <char> (c);

            c++;

            cout << a << " has the ASCII code: " << c << endl;
        }
while (c < 255);
return 0;
}
