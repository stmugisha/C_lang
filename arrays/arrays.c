/*Author:  Stephen Mugisha*/

/* The array data structure */
#include <stdio.h>

/*Printing elements of an array and the cummulative sum of their values*/
int main(void)
{
    int num[10];    // empty array
    int i;
    int sum = 0;
    
    /* assigning values to the array */
    for(i = 0; i < 10; i++){
        num[i] = i * 2;
    }

    printf("%s%10s%10s\n", "Element", "Value", "Cumsum");

    /* output array elements and their cum-sum */
    for(i = 0; i < 10; i++){
        sum += num[i];
        printf("%6d%10d%10d\n", i, num[i], sum);
    }
    return 0;
}
