/*#include <iostream>
#include <cstring>
using namespace std;
const int M=100;
const int N=10;*/


#include <iostream>
using namespace std;
const int m = 3;
const int n = 3;
void matrixentry(int[m][n]);
void displaymatrix(int[m][n]);
void columnsum(int[m][n]);
void transpose(int[m][n]);
int main()
{

	int userchoice;
	const int m = 3;
	const int n = 3;
	static int matrix[m][n];
	char userdesire;

	do
	{
		cout << " Welcome to the Array Management Menu. Press the respective integer key in order to perform corresponding functions:\n";
		cout << "1. Enter the elemetns of array" << endl;
		cout << "2. Display the elements of array" << endl;
		cout << "3. Display the sum of columns" << endl;
		cout << "4. Display the transpose of the 2D Array" << endl;
		cin >> userchoice;
		switch (userchoice)
		{
		case 1:
			matrixentry(matrix);
		case 2:
			displaymatrix(matrix);
		case 3:
			columnsum(matrix);
		case 4:
			transpose(matrix);
		default:
			cout << "invalid choice" << endl;

		}

		cout << "Do you want to repeeat(y/n)";
		cin >> userdesire;
	} while (userdesire == 'y' || userdesire == 'Y');
	return 0;
}

void matrixentry(int a1[m][n])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a1[i][j];
	}

	cout << endl << "Array Entry Successfully Executed" << endl;
}

void displaymatrix(int a1[m][n])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << " " << a1[i][j];
		cout << endl;
	}

	cout << endl << "Array Display Successfully Executed" << endl;
}
void columnsum(int a1[m][n])
{
	cout << "sum of columns :" << endl;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum = sum + a1[j][i];
		}
		cout << sum << " " << endl;;
	}

}
void transpose(int a1[m][n])
{
	cout << "Transpose of the given 2D Array is: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a1[j][i] << " ";
		}
		cout << endl;
	}
}




















/*void inputMatrix()
{
    int m,n;

    cout << "Enter rows of the matrix: ";
    cin >> m;
    cout << "Enter columns of the matrix: ";
    cin >> n;
    int A[m][n];

                for (int i =0;i<m;++i)
                {

                    for (int j=0;j<n;++j)
                       {
                           cout << "Enter A[" << i << "]"<<"["<<j<<"]: ";
                            cin >> A[i][j];
                       }
                }

}

void displayElements()
{
    inputMatrix();
    for (int i =0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout << A[i][j] <<"\t";

        if(j == (n-1))
            cout << "\n";

        }
    }
}

void columnSum()
{int sum=0;
int sum1=0;
    for (int i = 0 ; i < 2 ; ++i)
    {
        for(int j=0;j<2;j++)

            {
                int c=0;
                if (i == c)
                {
                    sum += A[j][i];
                    continue;
                }

                if (i == c)
                {
                    sum1+=A[j][i];

                }
            }
    }
 cout << sum << endl;
 cout << sum1 << endl;

    }

int main()
{
    char a;
    do
    {cout << "Enter " <<"\n1 to input a matrix" << "\n2 to display its elements" << "\n3 to display the column-wise sum" << "\n4 to perform the transpose of the matrix" << endl;;
    int x;
    cin >> x;
    int B;
    if (x == 1)
    {
        B = inputMatrix();

    }

    if(x==2)
    {
        displayElements(B[][n]);
    }

    if(x==3)
    {
  //      columnSum();
    }

    if (x==4)
    {
    //    transpose(A);
    }
    cout << "Would you like to use the program again? ";
    cin >> a;
    }
    while(a=='y');
return 0;
}*/








































int main()
{
    char a[M];
    cin.get(a,M);
    int b = strlen(a);
    int c(0);
    for (int i=0;i < b; ++i)
    {
        for (int j = (b-1); j >= 0; --j)
        {
            if(j<=i)
                break;

            if (a[i]==a[j])
                ++c;
        }


    }

    if (b%2==0 || b%2!=0)
    {
        if(c == (b/2))
            cout << "The string is a palindrome.";
    }

    else
    {
        cout << "The string isn't a palindrome."
    }
}













































int main()
{
   int N;
   cout << "Enter the number of rows and columns for the array: ";
   cin >> N;
   char array1[N][N];

    for(int i = 0; i <= (N-1); ++i )
    {
        for (int j =0; j<=(N-1);++j)
        {
            cout << "Enter member " << i << ", " << j << ": ";
            cin >> array1[i][j];
        }
    }

    for (int k = 0; k < N;k++)
    {

        for (int l = 0; l < N ; l++)
        {
            if (l<k)
            {
                cout << " ";
            }
            if (l>=k)
            {
                cout << array1[k][l];
            }

            if (l==(N-1))
            {
                cout << "\n";
            }

        }

    }

    return 0;
}*/
