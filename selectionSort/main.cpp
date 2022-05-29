#include <iostream>

using namespace std;

void printArray(int arg[], int length)
{
    for (int i = 0; i<length;i++)
    {
        cout << arg[i] << endl;
    }
}

void selectionSort(int arg[], int length)
{
    int currentSmallest = arg[0];
    int currentBiggest = arg[0];
    int smallestIndex;
    for (int i=0;i<length;i++)
    {
        for(int j=i;j<length;j++)
        {
            if (arg[j]<=currentSmallest)
            {
                currentSmallest = arg[j];
                smallestIndex = j;
            } else if(arg[j]>currentBiggest)
            {
                currentBiggest = arg[j];
            }
        }
        arg[smallestIndex] = arg[i];
        arg[i] = currentSmallest;
        currentSmallest = currentBiggest;
    }
    printArray(arg,length);
}

int main()
{
    


    int theArray[20] = {16,2,77,40,12,71,30,120,88,35,17,3,78,41,13,72,31,121,89,36};

    selectionSort(theArray,20);

    return 0;
}