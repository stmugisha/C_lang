//Author: Stephen Mugisha

/* Methods of referencing array elements.*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int prime[SIZE] = {1,3,5,7,11};
    int *pPtr = prime;
    int offset;
    int counter;

    /* array subscript method. */

    printf("Printing the primes array with the various methods:\n");
    printf("Array subscript method:\n");

    for(counter = 0; counter < SIZE; ++counter)
    {
        printf("%3d",prime[counter]);
    }
    printf("\n");

    /*Pointer subscripting method. */

    printf("pointer subscript method:\n");
    for(counter = 0; counter < SIZE; ++counter)
    {
        printf("pPtr[%d]: %d\n",counter, pPtr[counter]);
    }
    printf("\n");

    /* Pointer-offset method/notation */

    printf("pointer-offset method:\n");
    for(offset = 0; offset < SIZE; ++offset)
    {
        printf("*(pPtr + %d): %d\n",offset,*(pPtr + offset));
    }
    return 0;
}
