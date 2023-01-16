//NDHU CSIE Lab of programming 1, week 1.2

//Write a program to read in an integer, a floating point and a character then display them on screen
//Input
//A integer number, a floating point number and a character separate by a single space.
//Output
//Display each input in a single line.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y;
    char chr;
    scanf(" %d %f %c",&x, &y, &chr);

    printf("%d\n", x);
    printf("%f\n", y);
    printf("%c", chr);

    return 0;
}
