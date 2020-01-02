//Author: Stephen Mugisha

/*
Multi-dimensional arrays:
A program to add two matrices
*/

#include <stdio.h>

int main()
{
    int m[2][2] = {{1, 0}, {0, 1}};
    int n[2][2] = {{1, 1}, {1, 1}};
    
    int j[3][2] = {{2, 2}, {1, 3}};
    int k[1][3] = {{4, 5}, {0, 6}};

    printf("%d\n", *m[1]);
    printf("Total: %d\n", *n[1]+*m[0]);
}