// Author: Stephen Mugisha

/*
The bubble sort algorithm
*/

#include <stdio.h>
#define SIZE 7

void bubbleSort(int array[], int size);

int main()
{
    int odd[SIZE] = {13, 11, 1, 5, 7, 9, 3};
    int counter;

    printf("Array before sorting:\n");
    
    for(counter = 0; counter < SIZE; ++counter)
    {
        printf("%3d", odd[counter]);
    }
    printf("\n");

    /* sorting the array */
    bubbleSort(odd, SIZE);

    printf("Array after sorting:\n");

    for(counter=0; counter<SIZE; ++counter)
    {
        printf("%3d", odd[counter]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int array[], int size)
{
    int pass;   // num. of passes through the array
    int i;      // comparison counter
    int holder; // temporary swap location

    for(pass=1; pass < size-1; ++pass)
    {
        for(i=0; i < size-1; ++i)
        {
            if(array[i] > array[i+1])
            {
                holder = array[i];
                array[i] = array[i+1];
                array[i+1] = holder;
            }
        }
    }
}
