#include <iostream>
#include <string>
using namespace std;

void sortArray(string *a,int s)
{

    for(int i = 0; i < s; ++i)
    {
       int smallest = i;
       for (int j = i+1; j < s; ++j)
       {
           if(a[j] < a[smallest])
            smallest = j;
       }
            swap(a[i],a[smallest]);

    }


}



int main()
{
    cout << "How many names would you like to enter? ";
    int s;
    cin >> s;

    string *ptr1 = new string[s];

    for (int i=0 ; i<s;++i)
    {
        cout << "Enter a name: ";

        cin >> ptr1[i];
    }




    sortArray(ptr1,s);

    for (int i =0;i<s;++i)
    {
        cout << ptr1[i] <<endl;
    }

    delete[] ptr1;
    ptr1 = nullptr;

    return 0;
}
