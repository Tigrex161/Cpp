#ifndef TV_H
#define TV_H

class TV{
int maxChannels = 100;
int channel = 0;
int volume = 50;
bool state = false;
bool inputMode = false;
bool tuningMode = false;

public:
TV();
TV(const TV&);
void volumeUp();
void volumeDown();
void channelUp();
void channelDown();
void changeInputMode();
void changeState();
void displaySettings();
void changeTuningMode();
friend class Remote;

};

#endif
