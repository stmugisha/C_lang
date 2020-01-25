/* Creating a copy of a string from scratch */

#include <stdio.h>
#define SIZE 17

void copy(const char *str1, char *str2);

int main()
{
    char *string1 = "Agent of Shield.";
    char _copy[SIZE];

    copy(string1, _copy);
    printf("Copied string:\n %s\n", _copy);
}

void copy(const char *str1, char *str2)
{
    for(; (*str2 = *str1) != '\0'; ++str2, ++str1){;}
}
