#include <iostream>

using namespace std;


int power(int n, int p)
{



if(p==0)
return 1;

else
return n * power(n,p-1);



}

int main()
{
    cout << power(2,3) << endl;
    cout << power(3,3) << endl;
    cout << power(4,3) << endl;
    cout << power(5,3) << endl;
    return 0;
}
