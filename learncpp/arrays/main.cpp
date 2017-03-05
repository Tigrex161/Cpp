#include <iostream>
#include <utility>
using namespace std;



int main()
{
int a[9] { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for (int i = 0; i < 9; i++)
    {
        int b = 9-i;
        bool swapped(false);
        for (int j = 0 ; j < b-1 ; ++j)
        {

    if(a[j] > a[j+1])
                {swap(a[j],a[j+1]);
                swapped = true;
                }
        }
if(!swapped)
            {
                cout << "Early termination on iteration " << i+1 << endl;
                break;
            }
    }

    for (int i =0; i<9;i++)
    {
        cout << a[i];
    }
return 0;
}
