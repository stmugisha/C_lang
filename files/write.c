// Author: Stephen Mugisha

// Writing to a file.
// A file is a sequence of bytes that holds groups of data

#include <stdio.h>

void write(char text, FILE *fPtr);
void read(char text, FILE *fPtr);

int main()
{
    FILE *filePtr;  //declare a file using the structure ptr of FILE type
    char word;
    filePtr = fopen("words.txt", "w");

    write(word, filePtr);

    filePtr = fopen("words.txt","r");
    read(word, filePtr);
    return 0;
}

void write(char text, FILE *fPtr)
{
    printf("Enter data: \n");
    while((text = getchar()) != EOF)
    {
        putc(text, fPtr);    //write word to filePtr
    }
    fclose(fPtr);
}

void read(char text, FILE *fPtr)
{
    while((text = getc(fPtr)) != EOF)
    {
        printf("%c", text);
    }
    fclose(fPtr);
}
