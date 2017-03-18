#ifndef TIME_H
#define TIME_H
class time1{

int seconds;
int minutes;
int hours;

public:
time1();
time1(int, int , int);
void display() const;
time1 add(time1);


};
#endif
