#include <iostream>
#include "constants.h"

using namespace std;
using namespace myConstants;

float distanceFallen(int);

float initialHeight(){
float h;
cout << "This program outputs the height of a ball falling from a user defined height for 5 seconds " << endl;
cout << "Enter the initial height of the ball: ";
cin >> h; // initial height of ball
return h;
}

int main() {
float a;
float b;
float c;
float d;
float e;
float f;
float z;
z = initialHeight();

a = distanceFallen(0);
b = distanceFallen(1);
c = distanceFallen(2);
d = distanceFallen(3);
e = distanceFallen(4);
f = distanceFallen(5);
cout << "The initial height is: " << z - a << endl;
cout << "The height after 1 second is: "  << z - b << endl;
cout << "The height after 2 seconds is: " << z - c << endl;
cout << "The height after 3 seconds is: " << z - d << endl;
cout << "The height after 4 seconds is: " << z - e << endl;
cout << "The height after 5 seconds is: " << z - f << endl;
}


float distanceFallen(int x){
float d;
d = (g*x*x) /2 ;
return d;
}
