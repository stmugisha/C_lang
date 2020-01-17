// Author: Stephen Mugisha

/*
The bubble sort algorithm
*/

#include <stdio.h>
#define SIZE 7

void bubbleSort(int *const array, const int size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

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
    bubbleSort(odd, SIZE, ascending);

    printf("Array after sorting (ascending order):\n");

    for(counter=0; counter<SIZE; ++counter)
    {
        printf("%3d", odd[counter]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int *const array, const int size, int(*compare)(int a, int b))
{
    int pass;   // num. of passes through the array
    int i;      // comparison counter
    int holder; // temporary swap location

    for(pass=1; pass < size-1; ++pass)
    {
        for(i=0; i < size-1; ++i)
        {
            if((*compare)(array[i], array[i + 1]))
            //if(array[i] > array[i + 1])
            {
                holder = array[i];
                array[i] = array[i+1];
                array[i+1] = holder;
            }
        }
    }
}

int ascending(int a, int b)
{
    return a > b;
}

int descending(int a, int b)
{
    return b > a;
}
