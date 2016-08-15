#include <iostream>
#include <string>
using namespace std;
const int MAX(100);
int strlen(char []);

void wordCount()
{       int words(1);//Words in a sentence are 1 more than spaces
        char str[MAX];
        cout << "Enter a sentence: "<<endl;
        cin.getline(str,MAX);
        for(int i = 0; i <= MAX; ++i )
        {
            if (str[i] == ' ')
                 ++words;
        }
cout << "There are " << words << " words in your sentence.";
}

void prntStrBckwrd()
{
    char str[MAX];

    cout << "Enter a word/sentence: ";

    cin.getline(str,MAX);


    for(int i = strlen(str); i > 0 ; --i) // So that for loop doesn't run unnecessarily
        {
            cout << str[i-1];
        }
}

int strlen(char str[]) //Task 3
{

    int strlength(0);
    for (int j = 0 ; j <= (MAX-1) ; j++)
    {
        if (str[j] == '\0')
        break;
        ++strlength;
    }
    return strlength;
}

void prntStrLength()
{
    cout << "Enter a word/sentence: ";
    string a;
    getline(cin,a);

    cout << "The length of the string you entered is " << a.length() << " characters.";

}

void reverseString()
{
    char a[MAX];
    cout << "Enter a word/sentence ";
    cin.get(a,MAX);
    cout << a << endl;

    for (int i = (strlen(a)-1); i>=0; --i)//strlen counts null character so 1 is subtracted
    {
        char temp[MAX];
        static int j(0);

        if (i > j)
        {
        temp[j] = a[i];
        a[i]= a[j];
        a[j]=temp[j];
        ++j;
        }
    }
    cout << a;
}

int main()
{

    //wordCount();//Task 1
    //prntStrBckwrd();//Task 2
    //prntStrLength();//Task 4
    reverseString();//Task 5

    return 0;
}
