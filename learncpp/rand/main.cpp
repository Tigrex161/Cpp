#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomNumber(int mini,int maxi)
{
    static const double fraction= 1.0/(static_cast<double>(RAND_MAX)+1.0);
    return static_cast<int>(rand()*fraction*(maxi-mini+1)+mini);
}

void hiLow(int x)
{
    for (int i =1;i<=7;++i)
    {
        int y;
        cout << "Guess #" << i<< ": ";
        cin >> y;

        if (y > x)
        {
            cout << "Too high" << endl;
        }

            if (y < x)
            {
                cout << "Too low"<<endl;
            }
                if (y==x)
                {
                    cout << "Correct! You win."<<endl;
                    break;
                }
    }
}


int main()
{srand(time(0));

    cout <<"I'm thinking of a number. You have 7 tries to guess what it is." << endl;
    int x = getRandomNumber(1,100);
    hiLow(x);

char a;
do
{cout << "Would you like to play again? y/n ";
cin >> a;}
while(a != 'y' && a != 'n');

while (a=='y')
        {
            x=getRandomNumber(1,100);
            hiLow(x);
    cout << "Would you like to play again? y/n ";
cin >> a;
        }


if (a=='n')
{
    cout << "Thanks for playing!";
        return 0;
        }

}
