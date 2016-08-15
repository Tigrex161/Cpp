#include <iostream>

float celsiusToFahrenheit()

{

using namespace std;

int c;

float f;

cout << "Enter the temperature in Degrees Celsius: " << endl;

cin >> c;

f = (c*1.8)+ 32;

return f;

}
