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