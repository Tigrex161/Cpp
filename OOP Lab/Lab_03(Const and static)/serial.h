#ifndef SERIAL_H
#define SERIAL_H

class serial{
int id;
static int objCount;

public:

serial();
void getID() const;
static void getObjCount();

~serial();
};

#endif
