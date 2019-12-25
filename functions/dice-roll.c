/* Simulating six-sided dice rolling in C.
The program below 'rolls' a dice thrice. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned int seed;
    int face;
    
    printf("Enter seed(An integer number): ");
    scanf("%u", &seed);

    srand(seed); //seed random-num-generator

    for(i=1; i<=3; i++)
    {
        face = 1 + (rand()%6);
        printf("Outcome: %d\n", face);
    }
    return 0;
}