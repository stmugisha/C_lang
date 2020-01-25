/*
Using inbuilt string handling functions to manipulate
strings
*/

#include <stdio.h>
#include <string.h>
#define SIZE 18

int main()
{
    char str1[SIZE] = "Agent Of Shield.";
    char str2[SIZE];
    char slice[SIZE-12];

    strcpy(str2, str1); //copy str1 content into str2
    strncpy(slice, str1, 5); //copy first 5 chars of str1 into slice

    printf("Copied String:\t%s\nsliced_string:\t%s\n",
           str2, slice);

}
