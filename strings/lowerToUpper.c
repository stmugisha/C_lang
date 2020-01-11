// Author: Stephen Mugisha

/* Case conversion of strings.i.e lower,upper-case, etc. */

#include <stdio.h>
#include <ctype.h>

void toUppercase(char *sPtr);

int main()
{
    char string[] = "Agent of Shield..";
    printf("Input string:\n%s\n", string);
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