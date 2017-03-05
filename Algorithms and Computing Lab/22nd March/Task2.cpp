#include <iostream>

int fraction () {

using namespace std;

float n1, d1, n2, d2, sum1, sum2;

char ch1 {'/'};

cout << "Please enter the fractions in the form a/b where a is the numerator and b is the denominator.\n";

cout << "Enter the 1st fraction: " << endl;

cin >> n1 >> ch1 >> d1;

cout << "Enter the 2nd fraction: " << endl;

cin >> n2 >> ch1 >> d2;

sum1 = ((n1*d2) + (n2*d1));

sum2 = (d2*d1);

cout << "Sum = " << sum1 << "/" << sum2;

return 0;

}
