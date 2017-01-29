#include <iostream>
#include <cstdlib>
#include <cmath>
#include <random>
#include <ctime>
#include <utility>
#include <string>
using namespace std;

int length;
long long encrypted[10000]; //array that contains the encrypted message.
int coPhi;


long long genPrime()    //Generates and returns a random prime number within a set range
{
    bool isPrime = false;
    long long x;
    mt19937_64 mersenne(static_cast<unsigned int>(rand()));

do
    {

    x = mersenne() % 50;    //Numbers up to 100 generated. Small numbers used for simplicity.
    for(long long i = 2; i <= sqrt(x); ++i)
    {
        if(x%i == 0)
        {
            isPrime = false;
            break;
        }
    isPrime=true;
    }
 }
while(isPrime==false);

return x;
}



void encrypt(long long n, int coPhi)
{
    int ascii[10000];

    string message;

    cout << "Enter your message: " << endl;
    getline(cin, message);  //Text to be encrypted input by user and stored in a string.
    int strLength = message.length();


    for(int i = 0; i < strLength; ++i)
    {
        ascii[i] = (static_cast<int>(message[i]));
    }
cout << "Encrypted message: ";

   for (int i = 0 ; i < strLength; ++i)
   {

    unsigned long long temp = 1;
    for(int j = 0; j < coPhi; j++)
    {
     temp = (temp * (ascii[i] % n))%n;    //Fast modular exponentiation used to prevent overflow.
    }

    encrypted[i] = temp;

   }
for(int k =0;k<strLength;++k)
   cout << static_cast<char>(encrypted[k]);
cout << "\n";
cout << "Encrypted numbers: ";
for(int k =0;k<strLength;++k)
   cout << (encrypted[k]) << " ";
cout << "\n";

    length = strLength;

}


void decrypt(long long d, long long n, int length)
{

 long long decrypted[10000]; //Array to hold the decrypted text

cout << "Decrypted message: ";
 for (int i = 0; i < length; ++i)
 {
     {
     unsigned long long temp2 = 1;

     for(int j = 0; j < d; ++j)
     {
         temp2 = (temp2 * (encrypted[i]%n))%n; //Fast modular exponentiation
     }

    decrypted[i] = temp2;
     }
 }
for (int k=0; k<length;++k)
 cout << static_cast<char>(decrypted[k]);
 cout << "\n";
cout << "Decrypted numbers: ";
 for (int k=0; k<length;++k)
 cout << (decrypted[k]) << " ";
 cout << "\n";

 }



int genSecKey(int phi, int coPhi)       //Generates and returns a secret key
{
    int x;
    mt19937_64 mersenne(static_cast<unsigned int>(rand()));
    do{
    x = rand() % 200;
    if( ((coPhi * x) % phi) == 1 && x!=0 && x < phi && x!=coPhi)  break;    //Secret key 'd' should be less than phi and not equal to coPhi.
                                                                            //The function repeats until a suitable d is generated.
    }
    while(1);
    return x;
}

int genCoPrime(long long phi)    //Returns the value of a prime number that is co-prime to phi
{
     bool isPrime = false;
     int x;
     mt19937_64 mersenne(static_cast<unsigned int>(rand()));

do
    {

    x = mersenne() % 200;     // Random number from 0 - 100 generated using mersenne twister algorithm
    for(int i = 2; i <= sqrt(x); ++i)
    {
        if(x%i == 0)
        {
            isPrime = false;
            break;
        }
    isPrime =  true;
    }
 }
while(isPrime==false);

if(phi % x == 0)
    genCoPrime(phi);    //Recursion used to repeat function until a suitable number is generated

return x;
}




int main()
{
    srand(time(0)); //Random seed via system clock
    long long p;
    long long q;
    int d(0);
    long long n;
    long long phi;

mt19937_64 mersenne(static_cast<unsigned int>(rand()));

do{
    p = genPrime(); // Generating p;
    q = genPrime(); // Generating q;
        if(p < q)
        {
            swap(p,q);
        }
        if(p == q)
            continue;

        else break;

}
 while(1);

//    p = 43;
 //   q = 19;
     n = p*q;
     phi = (p-1)*(q-1);

  do
    {
            coPhi = genCoPrime(phi);
    }
    while(coPhi > phi); //coPhi should be less than phi.
                        //The loop runs until a suitable coPhi is generated.

            //coPhi = 19;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;
    cout << "n: " << n << endl;
    cout << "phi: " << phi << endl;
    cout << "coPhi: " << coPhi << endl;

        d = genSecKey(phi, coPhi);
    //d= 199;


    cout << "d: " << d << endl;

    encrypt(n,coPhi);

    decrypt(d, n, length);

    return 0;
}
