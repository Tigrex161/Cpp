#include <iostream>
#include <cmath>

using namespace std;


int cont;


double calcAverage(double n1, double n2,double n3,double n4,double &a)
{
    a = (n1+n2+n3+n4)/4;
    return a;
}


void input(int &h , int &m )
{
    cout << "Enter the time(HH:MM): " << "\n";
    char a(':');
    cin >> h >> a >> m;
}

int conversion(int &h, char &B)
{
    if (h == 0)
    {
        h = (h+12);
        B = 'A';
    }

    if (h > 0 && h <= 12)
    {

        B = 'A';
    }

    if(h > 12 && h < 24)
    {
        h = h - 12;
        B = 'P';
    }

return 0;
}

void output(int a, int b, char c)
{

 cout << "The time in 12-hour format is: " << a << ":" << b << " " << c << endl;

}*/


/*double power (double n, int p=2)
{
    int x(1);
    for (int i=1; i <=p; ++i)
    {x = x*n;}
    return x;
}*/


/*void triangle(int a, int b, int c,int &area, int &p)
{

    int sp;
    sp = (a+b+c)/2;
    int temp;
    temp = sp*(sp-a)*(sp-b)*(sp-c);
    area = sqrt(temp);
    p = a+b+c;
}*/

int main()
{
   /* cout << "Enter 4 numbers: ";
    double num1, num2, num3, num4, avg(0);
    cin >> num1 >>num2 >> num3 >>num4;
    cout << "The average of the 4 numbers is: " << calcAverage(num1,num2,num3,num4,avg);
    return 0; */

do
{
int h(0),m(0);
char B;
input(h,m);
conversion(h,B);
output(h,m,B);
cout << "Would you like to do another conversion?"<<endl;
cin >> cont;
}
while (cont == 1);

/*double n(3.0);
int p(3);
cout << power(n,p);*/

/*int area,perimeter,a,b,c;
cout << "Enter lengths of sides of triangle: ";
cin >> a >> b >> c;

triangle(a,b,c,area,perimeter);
cout <<"The area is: " << area << endl;
cout <<"The perimeter is: "  << perimeter << endl;*/






}
