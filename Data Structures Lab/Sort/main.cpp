#include <utility>//for std::swap
#include <iostream>


void selectionSort(int array[], int length)
{

for (int startIndex = 0; startIndex < length; ++startIndex)
    {

        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {

            if (array[currentIndex] < array[smallestIndex])

                smallestIndex = currentIndex;
        }


        std::swap(array[startIndex], array[smallestIndex]);
    }

}




void bubbleSort(int array[], int length)
{

for (int i = 0; i < length-1; ++i)
    {
        for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
        {

            if (array[currentIndex] > array[currentIndex+1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }
    }


}



void insertionSort(int array[], int length)
{

int j;

	for (int i = 1; i < length; i++){
		j = i;

		while (j > 0 && array[j] < array[j-1])
            {
			  std::swap(array[j],array[j-1]);
			  j--;
            }
		}


}



void linearSearch(int array[], int length, int variable)
{

for(int i = 0; i < length; ++i)
{

if(array[i]==variable)
{
    std::cout << "Number found at index " << i << " in array." << std::endl;
    break;
}
    if(i==length-1 && array[i]!=variable)
    std::cout << "Number not found in array." << std::endl;
}


}


bool binarySearch(int array[], int length, int var)
{


for(int i = 0; i < length; ++i)
{




if(var > array[(length-1)/2])
{
 i = (length/2);
 //length = length/2;
    //continue;
}

if(var < array[(length-1)/2])
{
length = ((length/2)-1);
//continue;
}

if(array[i]==var)
{
std::cout << "Number found at index " << i << " in the array." << std::endl;
    return 1;
}

}
std::cout << "Number not found in array." << std::endl;
return 0;
}






void printArray(int array[], int length)
{

for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';

}





int main()
{
    const int length(10);
    int array[length] = {30, 50, 20, 10, 40, 5, 4, 56, 32, 11};
    const int length1(9);
    int array1[length1] = {6, 3, 2, 9, 7, 1, 5, 4, 8 };
//selectionSort(array,length);
//bubbleSort(array,length);
//insertionSort(array,length);
//linearSearch(array,length,12);
//printArray(array,length);
//binarySearch(array,length,30);

    return 0;
}













