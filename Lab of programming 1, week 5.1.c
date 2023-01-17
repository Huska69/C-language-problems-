//NDHU CSIE Lab of programming 1, week 5.1

//The number e, also known as Euler's number, is a mathematical constant approximately equal to 2.71828 which can be characterized in many ways. 
//It is the base of the natural logarithms. It is the limit of(1 + 1/n)n as n approaches infinity, an expression that arises in the study of compound interest. 
//It can also be calculated as the sum of the infinite series
//Output
//2.718


#include <stdio.h>
#include <math.h>

int main()
{
    double e;
    // e = lim (1 + 1/n)**n
    int n = 4096;  //2^13
    e = 1.0 + 1.0 / n;   //2/8192=13
    for (int i = 0; i < 12; i++)  //so this loop run through exactly 13 iterations. 
        e *= e;
    printf("%.3lf", e);

    return 0;
}
