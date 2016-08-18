#include <iostream>
#include "header.h"
#include <string>
#include <utility>
#include <array>
using namespace std;

/*enum playerItems
    {
        Torch,
        Arrow,
        Potion
    };

int main()
{
    int inventory[3];
    inventory[Torch] = 5;
    inventory[Arrow] = 10;
    inventory[Potion] = 2;
    cout << countTotalItems(inventory);




    return 0;
}

int countTotalItems(int* inventory)
{
return ((inventory[Torch])+ (inventory[Arrow]) + (inventory[Potion]));
}*/

/*int main()
{

struct student
{
 string name;
 int grade;
};

int n;
cout << "How many students would you like to enter data for? \n";
cin >> n;

student *students = new student[n];

for (int i = 0; i < n; ++i)
{
    cout << "Enter name: ";
    cin >> students[i].name;
    cout << "Enter grade: ";
    cin >> students[i].grade;
}

for (int j=0; j<n; ++j)
{
    int maxIndex=j;

    for (int k=j+1; k<n; ++k)
    {
        if(students[k].grade > students[maxIndex].grade)
        swap(students[k],students[maxIndex]);

    }

}

for (int l = 0; l<n; ++l)
{
    cout << students[l].name << " got a grade of " << students[l].grade << endl;
}

delete[] students;

}*/

/*void swapper(int &a, int &b)
{
 int temp(0);
  temp=a;
    a = b;
    b = temp;
}


int main()
{
    int a =3;
    int b=2;
    swapper(a,b);
    cout << a;
    cout<< b;
    return 0;

}*/


/*void printChar(const char *str)
{
    while (*str != '\0')
    {

        cout << *str;

        *str++;

    }

}


int main()
{
    printChar("Hello World!");
}*/


enum CardRank{
                Rank_2,
                Rank_3,
                Rank_4,
                Rank_5,
                Rank_6,
                Rank_7,
                Rank_8,
                Rank_9,
                Rank_10,
                Rank_Jack,
                Rank_King,
                Rank_Queen,
                Rank_Ace
                //Max_Ranks
};

enum CardSuit{

                Suit_Club,
                Suit_Heart,
                Suit_Diamond,
                Suit_Spade
                //Max_Suits
};


struct Card{

    CardRank rk;
    CardSuit su;
};



void printCard(const Card &card);
void printDeck(const array<Card,52> &deck);

int main(){




array <Card,52> deck;

int card=0;
for (int i = 0; i<4; ++i)
{


    for (int j = 0; j < 13; j++)
    {
        (deck[card]).su = static_cast<CardSuit>(i);
        (deck[card]).rk = static_cast<CardRank>(j);
        ++card;
    }



}

printDeck(deck);

return 0;
}



void printCard(const Card &card)
{
switch(card.rk)

{
case Rank_2:     {cout << "2" ;break; }

case Rank_3:     {cout << "3" ;break; }

case Rank_4:     {cout << "4" ;break; }

case Rank_5:     {cout << "5" ;break; }

case Rank_6:     {cout << "6" ;break; }

case Rank_7:     {cout << "7" ;break; }

case Rank_8:     {cout << "8" ;break; }

case Rank_9:     {cout << "9" ;break; }

case Rank_10:    {cout << "10";break; }

case Rank_Jack:  {cout << "J" ;break; }

case Rank_King:  {cout << "K" ;break; }

case Rank_Queen: {cout << "Q" ;break; }

case Rank_Ace:   {cout << "A" ;break; }

}


switch(card.su)

{
case Suit_Club:    {cout << "C";break;}

case Suit_Diamond: {cout << "D";break;}

case Suit_Heart:   {cout << "H";break;}

case Suit_Spade:   {cout << "S";break;}
}
}


void printDeck(const array<Card,52> &deck)
{

for (const auto &i:deck)
{
printCard(i);
cout <<" ";
}


}










