/* Simulating six-sided dice rolling in C.
The program below 'rolls' a dice thrice. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    unsigned int seed;
    int face;

    printf("Enter seed (An integer): ");
    scanf("%u", &seed);

    srand(seed); /* seed RNG */

    //srand(time(NULL)); /* clock-controlled RNG */

    for(i=1; i<=3; i++)
    {
        face = 1 + (rand()%6);
        printf("Outcome: %d\n", face);
    }
    return 0;
}