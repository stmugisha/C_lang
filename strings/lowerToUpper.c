// Author: Stephen Mugisha

/* Case conversion of strings.i.e lower,upper-case, etc. */

#include <stdio.h>
#include <ctype.h>
#define SIZE 18

void toUppercase(char *sPtr);

int main()
{
    char string[SIZE];
    printf("Input string:\n");
    fgets(string, SIZE, stdin);
    printf("unformatted string:\n%s\n", string);
    toUppercase(string);
    printf("Formatted string:\n%s\n", string);

    return 0;
}

void toUppercase(char *sPtr)
{
    while(*sPtr != '\0')
    {
        if(islower(*sPtr))
        {
            *sPtr = toupper(*sPtr);
        }
        ++sPtr;
    }
}
