#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x = 0;
    while (x <= 100){

        sum = sum + x;
        x = x + 1;
    }
    cout << "The sum of the first hundred numbers is: " << sum;
    return 0;
}

