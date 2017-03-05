#include <iostream>
#include "header.h"
#include <string>
#include <utility>
#include <array>
#include <ctime>
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
void swapCard(Card &card1, Card &card2);
void shuffleDeck(array<Card,52> &deck);
int getRandomNumber(int, int);
int getCardValue(Card);
bool playBlackJack(array<Card,52> &deck);



int main(){

        srand(static_cast<unsigned int>(time(0)));


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
playBlackJack(deck);


return 0;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
 	// evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
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
cout <<endl;
}


}

void swapCard(Card &card1, Card &card2)
{
    Card temp;
      temp = card1;
    card1 = card2;
    card2 = temp;
}


void shuffleDeck(array<Card,52> &deck)
{
    for (int i =0; i<52; ++i)
    {

        int a   =  getRandomNumber( 0,51 );
        swapCard((deck[i]),(deck[a]));
    }


}


int getCardValue(const Card card)
{

switch(card.rk)
{
case Rank_2:
{
return 2;
break;
}

case Rank_3:
{
return 3;
break;
}

case Rank_4:
{
return 4;
break;
}

case Rank_5:
{
return 5;
break;
}

case Rank_6:
{
return 6;
break;
}

case Rank_7:
{
return 7;
break;
}

case Rank_8:
{
return 8;
break;
}

case Rank_9:
{
return 9;
break;
}

case Rank_10:
{
return 10;
break;
}

case Rank_Jack:
{
return 10;
break;
}

case Rank_King:
{
return 10;
break;
}

case Rank_Queen:
{
return 10;
break;
}

case Rank_Ace:
{
return 11;
break;
}

}
return 0;
}

bool playBlackJack(array<Card,52> &deck)
{

bool player(0);
shuffleDeck(deck);
int playerScore(0);
int dealerScore(0);
int playerChoice;
int dealtAce;

const Card *ptr = &deck[0];

dealerScore += getCardValue(*ptr++);

playerScore += getCardValue(*ptr++);
playerScore += getCardValue(*ptr++);




do
{
cout << "Will you hit or stand? 1/0 ";
cin  >> playerChoice;
    if (playerChoice == 1)
    {

    playerScore += getCardValue(*ptr++);

    if (getCardValue(*ptr++) == 11  )
    {
        ++dealtAce;
    }
    cout << "Player draws" << endl;
    if (getCardValue(*ptr++) == 11 )
    {cout << "Player draws an Ace";}
    cout << "Player score = " << playerScore << endl;
    }
    if(playerScore > 21 && dealtAce == 0)
    {
    cout << "Dealer wins due to player busting." << endl;
    return 0;
    }

    if(playerScore >21 && dealtAce != 0)
    {
        playerScore -= 10;
        --dealtAce;
    }


}

while (playerChoice == 1);


do
{
    dealerScore += getCardValue(*ptr++);
    cout << "Dealer draws " << endl;
    cout << "Dealer score = " << dealerScore << endl;

}

while (dealerScore < 17);




if (dealerScore > 21 && playerScore <=21)

{
cout << "Player wins due to dealer busting." << endl;
return 1;
}

if (playerScore > dealerScore && playerScore <= 21)

{
cout << "Player wins due to higher score." << endl;
    return 1;
}

if (dealerScore > playerScore && dealerScore<=21)

{
cout << "Dealer wins due to higher score." << endl;
    return 0;
}



return true;
}
