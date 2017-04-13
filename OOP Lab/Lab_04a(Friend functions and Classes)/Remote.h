#include "TV.h"
#ifndef REMOTE_H
#define REMOTE_H
class Remote{

bool remoteMode = false;

public:
Remote();//
Remote(const Remote&);//
void volumeUp(TV &);//
void volumeDown(TV &);//
void channelUp(TV &);//
void channelDown(TV &);//
void setChannel(TV &, int);//
void changeInputMode(TV &);//
void changeTuningMode(TV &);//
void changeState(TV &);//
void displaySettings(TV &);//
void changeRemoteMode();//
};

#endif
