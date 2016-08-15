#include <iostream>
#include <string>
using namespace std;

enum class MonsterType{
Ogre,
Dragon,
Slime
};

struct Monster{
MonsterType type;
int health;
string name;
};

string getMonsterType(Monster x)
{
    if (x.type == MonsterType::Ogre)
        {return "Ogre";}
    if (x.type == MonsterType::Slime)
        {return "Slime";}
    return "unknown";
}

void printMonster(Monster x)
{
    cout << "This " << getMonsterType(x);
    cout << " is named " << x.name << " and has " << x.health << " health." << endl;
}



int main()
{
    Monster ogre {MonsterType::Ogre,145,"Trog"};
    Monster slime {MonsterType::Slime,43,"Belch"};

    printMonster(ogre);
    printMonster(slime);

    return 0;

}







