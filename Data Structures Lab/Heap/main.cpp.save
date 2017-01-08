#include <iostream>
#include <utility>
using namespace std;

const int heapSize = 50;

struct heap{

int heapArray[heapSize];
int length = 0;


heap()
{

for(int i =0; i<heapSize; ++i)
{
    heapArray[i] = -1;
}

}


bool isFull()
{
if(heapArray[heapSize-1]!=-1)
    return true;

    else
    return false;
}




bool isEmpty()
{
        if(heapArray[0]!=-1)
        return false;
        else
        return true;
}

void insert(int num)
{

    if(isFull())
    {
    cout << "Heap is full."<< endl;
    }


    /*      L=2n+1
            R=2n+2
            P=n-1/2     */


    else
     {      heapArray[length] = num;
            ++length;
     }


        if(length > 1)
{
    int index = length-1;
    while(index != 0)
    {
        int P = (index-1)/2;
        if(heapArray[index] > heapArray[P])
            swap(heapArray[index],heapArray[P]);
        index = P;

    }

}

}



void del()
{

if(isEmpty())
{
cout << "Heap is already empty." << endl;
}

if(length == 1)
{
heapArray[0]==-1;
}


if(length > 1)
{

swap(heapArray[0],heapArray[length-1]);
heapArray[length-1] = -1;
--length;
int index = 0;
while(1)
{

int L = (2*index)+1;
int R = (2*index)+2;

if(heapArray[index] < heapArray[L])
    {
        swap(heapArray[index],heapArray[L]);
        index = L;
        continue;
    }

else
    {
        if(heapArray[index]<heapArray[R])
            {
                swap(heapArray[index],heapArray[R]);
                index = R;
                continue;
            }
    }

    if(heapArray[index] > heapArray[L] && heapArray[index] > heapArray[R])
    break;
}

}


}



};






int main()
{
    heap one;
    cout << one.length<< endl;
    one.insert(5);
    cout << one.length << endl;
    one.insert(6);
    cout << one.length << endl;
    one.insert(7);
    cout << one.length<< endl;
    one.insert(55);
    one.insert(45);
    one.insert(111);
    one.insert(12);
    one.insert(123);
    one.del();
    one.del();
for (int i = 0; i < one.length;++i)
{
cout << one.heapArray[i];
}

    return 0;
}
