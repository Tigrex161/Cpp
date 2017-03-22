#include <iostream>
#include "TV.h"
using namespace std;

TV::TV()
{
}


TV::TV(const TV &a)
{
volume = a.volume;
channel = a.channel;
inputMode = a.inputMode;
tuningMode = a.tuningMode;
state = a.state;
maxChannels = a.maxChannels;
}


void TV::displaySettings(){

if(state)
{
cout << "Current volume: "<< volume << endl;
cout << "Current channel: " << channel << endl;
if(tuningMode)
cout <<  "Tuning mode: Cable" << endl;
else
cout <<  "Tuning mode: Antenna" << endl;
if(inputMode)
cout <<  "Input mode: TV" << endl;
else
cout <<  "Input mode: AV" << endl;
}

else
cout << "The TV is powered off." << endl;
}



void TV::volumeUp()
{
if(state)
 ++(volume);
else
cout << "The TV is powered off." << endl;
}

void TV::volumeDown()
{
if(state)
 --(volume);
else
cout << "The TV is powered off." << endl;
}

void TV::channelUp()
{
 if(state)
 ++(channel);
else
cout << "The TV is powered off." << endl;
}

void TV::channelDown()
{
if(state)
 --channel;
 else
cout << "The TV is powered off." << endl;
}


void TV::changeState()
{
    if(state)
    state = false;
    else
    state = true;
}

void TV::changeInputMode()
{
if(inputMode)
inputMode = false;
else
inputMode = true;
}

void TV::changeTuningMode()
{
if(tuningMode)
tuningMode = false;
else
tuningMode = true;
}
