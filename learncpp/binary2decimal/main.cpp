#include <iostream>
#include <cmath>
using namespace std;


int convert1(char a)
{
    int Q;
    if (a=='1')
    {
        Q = 2*2*2;
    }
    if ( a == '0')
{
    Q = 0;
}
return Q;
}

int convert2(char a)
{
    int W;
    if (a=='1')
    {
        W = 2*2;
    }
    if ( a == '0')
{
    W = 0;
}
return W;
}

int convert3(char a)
{
    int E;
    if (a=='1')
    {
        E = 2;
    }
    if ( a == '0')
{
    E = 0;
}
return E;
}
int convert4(char a)
{
    int R;
    if (a=='1')
    {
        R = 1;
    }
    if ( a == '0')
{
    R = 0;
}
return R;
}
int main()
{
    int Q,W,E,R,sum;
    char a;
    cout << "Enter a 4 or 8-bit binary number ";
    cin >> a;
    cout << (a);
    Q = convert1(a);
    cin >> a;
    W = convert2(a);
    cin >> a;
    E = convert3(a);
    cin >> a;
    R = convert4(a);
    sum = Q+W+E+R;
    cout << "This number is " << sum << " in the decimal system.";
    return 0;
}
