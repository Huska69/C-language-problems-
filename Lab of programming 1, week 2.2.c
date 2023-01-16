//NDHU CSIE Lab of programming 1, week 2.2

//Write a program to read in a floating point number and display the round off and round down to second decimal place of the number.
//Input
//A floating point number.
//Output
//Display the result of round off in a single line and the result of round down in another line.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    scanf("%f", &a);
    printf("%.2f\n%.2f", roundf(a*100)/100, floorf(a*100)/100);

    return 0;
}
