#include<iostream>
using namespace std;

int main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(a+i) << endl;
	}







#include<iostream>
using namespace std;

void addarrays(float*, float*, float*, int);

void main()
{
	const int n = 10;
	float a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	float b[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	float c[n];
	addarrays(a, b, c, n);
	for (int i = 0; i < n; i++)
	{
	cout << c[i] << endl;
	}
	system("pause");
}

void addarrays(float* x, float* y, float* z, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(z + i) = *(x + i) + *(y + i);
	}
}
}










#include<iostream>
using namespace std;

int compstr(char*, char*);

void main()
{
	const int max = 100;
	char s1[max];
	char s2[max];
	cin.getline(s1, max);
	cin.getline(s2, max);
	cout << compstr(s1, s2) << endl;
	system("pause");
}

int compstr(char* s1, char* s2)
{
	if (*s1 < *s2)
	return -1;
	if (*s1 == *s2)
		return -0;
	if (*s1 > *s2)
		return 1;
}
    return 0;
}
