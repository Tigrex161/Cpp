#include <iostream>

using namespace std;

void mem(int *p, int *q, int *r)
{
    if(q==nullptr)
cout << "Hello" << endl;

cin >> *p;


}



int main()
{
    int *p = nullptr;
    int *q = nullptr;
    int *r = nullptr;

    p = new int;

    mem(p,q,r);
    cout << *p;
    delete p;
    cout << *p;
    return 0;
}
