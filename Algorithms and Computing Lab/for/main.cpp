#include <iostream>

using namespace std;

int main()
{
    for (int i = 0 ; i <= 5 ; i++)
{

for (int j = 0 ; j <= i ; j++)
           {
                int k(1);
               k = k+1;
               cout << k;
           }
    cout << endl;
}
/*cout << "Enter the number of students: " << endl;
int n;
cin >> n;
for (int i = 1 ; i <= n ; ++i)
   {
       cout << "Enter student " << i << "'s marks in English: "<< endl;
        float s1;
        cin >> s1;
       cout << "Enter student " << i << "'s marks in Calculus: "<< endl;
        float s2;
        cin >> s2;
       cout << "Enter student " << i << "'s marks in marks in DLD: " << endl;
        float s3;
        cin >> s3;
        float avg = (s1+s2+s3)/3;
        cout << "The average of student " << i << "'s marks is: " << avg << endl;
   }*/

return 0;
}
