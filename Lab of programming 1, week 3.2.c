//NDHU CSIE Lab of programming 1, week 3.2

//Write a program to read in 4 number and display the largest one.
//Input
//4 number separate by a blank
//Output
//The largest number of given 4.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d){
        printf("%d", a);
    }
    else if (b > c && b > d){
        printf("%d", b);
    }
    else if (c > d){
        printf("%d", c);
    }
    else{
        printf("%d", d);

    }

    return 0;
}
