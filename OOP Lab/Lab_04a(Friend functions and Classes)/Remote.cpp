#include <iostream>
#include "Remote.h"
#include "TV.h"

using namespace std;

Remote::Remote()
{
}


Remote::Remote(const Remote &a)
{
remoteMode = a.remoteMode;
}


void Remote::volumeUp(TV &a)
{
if(a.state)
 ++(a.volume);
else
cout << "The TV is powered off." << endl;
}

void Remote::volumeDown(TV &a)
{
if(a.state)
 --(a.volume);
else
cout << "The TV is powered off." << endl;
}

void Remote::channelUp(TV &a)
{
 if(a.state)
 ++(a.channel);
else
cout << "The TV is powered off." << endl;
}

void Remote::channelDown(TV &a)
{
if(a.state)
 --(a.channel);
 else
cout << "The TV is powered off." << endl;
}

void Remote::setChannel(TV &a, int b)
{
 if(a.state)
 {
    (a.channel) = b;
 }
 else
    cout << "The TV is powered off." << endl;
}

void Remote::changeState(TV &a)
{
    if(a.state)
    a.state = false;
    else
    a.state = true;
}

void Remote::changeInputMode(TV &a)
{
if(a.inputMode)
a.inputMode = false;
else
a.inputMode = true;
}

void Remote::displaySettings(TV &a){

if(a.state)
{
cout << "Current volume: "<< a.volume << endl;
cout << "Current channel: " << a.channel << endl;
if(a.tuningMode)
cout <<  "Tuning mode: Cable" << endl;
else
cout <<  "Tuning mode: Antenna" << endl;
if(a.inputMode)
cout <<  "Input mode: TV" << endl;
else
cout <<  "Input mode: AV" << endl;
}

else
cout << "The TV is powered off." << endl;

}


void Remote::changeTuningMode(TV &a)
{
if(a.tuningMode)
a.tuningMode = false;
else
a.tuningMode = true;
}

void Remote::changeRemoteMode()
{
if(remoteMode)
remoteMode = false;
else
remoteMode = true;
}
