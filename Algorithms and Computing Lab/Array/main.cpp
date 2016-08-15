#include <iostream>
using namespace std;

struct x
{

int member;
int index;

};

void searchArray(int y,  x a1[])
{
    int x;
    for (int i(0); i<=4; i++)

    { if (y == a1[i].member)

            {cout << y << " is located at index position " << a1[i].index << " in the array.";
            x = 1;
            break;

            }
    }
        if (x!=1)
        {
            cout << "This number is not present in the array.";
        }

}
int main()
{
    x a1[5] = {{10,0},{40,1},{35,2},{41,3},{21,4}};

        cout << "Enter a number: ";
        int y;
        cin >> y;
searchArray(y,a1);

}
