// Command Line Arguments
// A program that return the input arguments

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    if(argc >= 2)
    {
        printf("Input arguments: \n");
        for(i=1; i < argc;++i)
        {
            printf("%s\n", argv[i]);
        }
    }
    else
    {
        printf("empty arg list !\n");
    }
    return 0;    
}

// Usage:
// after compilation, run your compiled file "./a.out" for instance,
// then supply any number of arguments. e.g. ./a.out 1 2 3 4