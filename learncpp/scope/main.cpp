#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer: ";
    int x;
    cin >> x;
    int y;
    cout << "Enter a larger integer: ";
    cin >> y;

        if (x > y)
        {
               cout << "Swapping the values...\n";
               int temp = x;
               x = y;
               y = temp;
        }

            cout << "The smaller value is " << x << endl;
            cout << "The larger value is " << y << endl;
    return 0;
}
