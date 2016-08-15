#include <iostream>
#include "constants.h"
#include <cmath>
using namespace std;

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = (myConstants::gravity*seconds*seconds)/2;
    double currentHeight = initialHeight-distanceFallen;
    return currentHeight;
}

void printHeight(double height, int seconds)
{
    if (height > 0.0)
        {
            cout << "At " << seconds << " seconds, the ball is at height:\t" << height << " meters\n";

        }
    else
		{

            cout << "At " << seconds << " seconds, the ball is on the ground.\n";

		}
}




int main()
{
    cout << "Enter the height of the tower in meters: " ;
    double initialHeight;
    cin >> initialHeight;

    double j = sqrt((initialHeight*2)/myConstants::gravity);

        for (double i = 0; i<=j ; ++i)
        {
        double z = calculateHeight(initialHeight, i);

        printHeight(z, i);
        }


        return 0;
}
