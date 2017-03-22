#include <iostream>
#include "TV.h"
#include "Remote.h"
using namespace std;

int main()
{

TV a;
Remote b;
b.changeState(a);
b.volumeUp(a);
//a.displaySettings();
b.setChannel(a,24);
b.changeInputMode(a);
b.changeTuningMode(a);
//a.displaySettings();
a.channelDown();
a.volumeDown();
TV c;
c = a;

a.displaySettings();

c.displaySettings();

}
