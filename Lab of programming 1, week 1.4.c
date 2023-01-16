//NDHU CSIE Lab of programming 1, week 1.4

//Write a program read in three integer and display the average of them.
//Input
//Three integerseparate by a single space.
//Output
//The average of given integer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    float average = (a+b+c)/3.0;
    printf("%f\n", average);

    return 0;
}
