#include <iostream>

using namespace std;

float tax() {

float sales, ltax, stax;

cout << "Enter total sales ($): ";

cin >> sales;

cout << "\nEnter the state tax (%): ";

cin >> stax;

cout << "\nEnter local tax (%): ";

cin >> ltax;

cout << "\nThe total sale for the month is: " << "$" << sales  << endl;

cout << "\nThe state tax for the month is: " << "$" << (sales * stax) << endl;

cout << "\nThe local tax for the month is: " << "$" << (sales * ltax) << endl;

return 0;

}
