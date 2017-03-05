#include <iostream>

using namespace std;

int main()
{
    cout << "ROCK PAPER SCISSORS." << endl;
    cout << "Player 1 choose your weapon: "<<endl;
    char p;
    cin >> p;
    cout << "Player 2 choose your weapon: " << endl;
    char q;
    cin >> q;
    if (p == 'R' || p == 'r')
    {
        if (q == 'R' || q == 'r')
        {
            cout << "It's a draw";
        }

        if (q == 'P' || q == 'p')
        {
            cout << "Paper covers rock. P2 wins.";
        }

        if (q == 'S' || q == 's')
        {
            cout << "Rock breaks scissor. P1 wins.";
        }
    }
    if (p == 'S' || p == 's')
    {
        if (q == 'S' || q == 's')
        {
            cout << "It's a draw";
        }

        if (q == 'P' || q == 'p')
        {
            cout << "Scissor cuts paper. P1 wins.";
        }

        if (q == 'R' || q == 'r')
        {
            cout << "Rock breaks scissor. P2 wins.";
        }
    }

    if (p == 'P' || p == 'p')
    {
        if (q == 'P' || q == 'p')
        {
            cout << "It's a draw";
        }

        if (q == 'R' || q == 'r')
        {
            cout << "Paper covers rock. P1 wins.";
        }

        if (q == 'S' || q == 's')
        {
            cout << "Scissor cuts paper. P2 wins.";
        }

    }

return 0;
}
