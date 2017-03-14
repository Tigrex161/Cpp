#include <iostream>
#include <thread>
#include <string>
using namespace std;

void add(int x, int z = 0)
{

    int y(0);

    int i;

    for(i = z; i <= x ; ++i)
    {

        y += i;
    }

cout <<  y  << endl;
}


void addt(int a, int b)
{
cout << a+b << endl;

}

int main()
{
thread t1(add, 500, 0);
thread t2(add, 1000, 501);

/*unsigned int nthreads = std::thread::hardware_concurrency();
cout << nthreads;*/
int a;
cout << "Enter a number ";
cin >> a;

cout << a;

t1.join();
t2.join();
    return 0;
}
