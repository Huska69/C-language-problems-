//NDHU CSIE Lab of programming 1, week 1.3

//Write a program read in a character and display it using as an integer and as a character.
//Input
//A displayable ASCII code character
//Output
//An integer represent the given character in a single line and the given character in another line.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chr;
    scanf("%c", &chr);
    printf("%d\n", chr);
    printf("%c", chr);

    return 0;
}
