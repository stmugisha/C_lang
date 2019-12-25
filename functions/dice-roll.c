/* Simulating six-sided dice rolling in C.
The program below 'rolls' a dice thrice. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1; i<=3; i++)
    {
        printf("%d", 1+rand()%6);
    }
    return 0;
}