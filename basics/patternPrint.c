//Author: Stephen Mugisha
// Printing a right-angled star triangle with a for loop

#include <stdio.h>

int main()
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}