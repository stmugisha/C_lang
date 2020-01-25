/* Working with pointers to functions. */

#include <stdio.h>

int prime(int n);
int even(int n);
int odd(int n);

int main()
{
    int (*f[3])(int) = {prime, even, odd};
    int num;

    printf("Enter a number between 0 & 2:\n"
           "\n0 for prime numbers in this range\n"
           "1 for even numbers\n"
           "2 for odd numbers\n"
           "3 or any number outside the range to terminate\n");
    scanf("%d", &num);

    while(num >= 0 && num < 3)
    {
        (*f[num])(num);
        printf("Enter a number between 0 & 2:\n");
        scanf("%d", &num);
    }
    printf("Terminated.\n");
}

int prime(int n)
{
    printf("Prime number function\n");
}
int even(int n)
{
    int i;
    for(i = 0; i <= n; ++i)
    {
        if(i%2==0)
        {
            printf("Even nums:\n%d\n", i);
        }
    }
}
int odd(int n)
{
    int i;
    for(i = 0; i <= n; ++i)
    {
        if(i%2 != 0)
        {
            printf("Odd nums:\n%d\n", i);
        }
    }
}