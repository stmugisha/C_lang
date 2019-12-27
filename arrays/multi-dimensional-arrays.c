//Author: Stephen Mugisha

/*
Multi-dimensional arrays: Can store elements of more than
one dimension. e.g matrices 
*/

#include <stdio.h>

int main()
{
    int m[2][2] = {1, 0, 0, 1};
    int n[2][2] = {1, 1, 1, 1};

    printf("%d\n", &m[1]);
    printf("Total: %d\n", *n[1]+*m[0]);
}