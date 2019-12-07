// Author: Stephen Mugisha
// Functions in C
// A program to compute the area of a triangle

#include <stdio.h>

//the area function
int Area(int length, int width)
{
    return(0.5 * length * width);
}

int main()
{
    int a = 12;
    int b = 10;
    int result = Area(a, b);
    printf("The area of the triangle is %d\n", result);

    return 0;
}