//NDHU CSIE Lab of programming 1, week 5.4

//Given the square root of a positive integer N is between 0 and N, let the square root of N be x, a=0 is the lower bound, and b=N is the upper bound. Then there is the inequality a<=x<=b, square the inequality to get a*a<=x*x=N<=b*b, and let c = (a+b)/2 according to the root approximation through bisection, when square of c is greater than or equal to N, we update the upper bound and get a new inequality a<=x<=c, otherwise, we update the lower bound and get a new inequality c<=x<=b. The difference between the upper and lower bounds is called the error. 
//Please design a program in which the user enters a positive integer and calculates the square root of the positive integer. Please be accurate to four decimal places.
//Input
//An integer n
//Output
//Output the root of naccurate to four decimal places.

#include<stdio.h>

int main()
{
    int number;
    float temp, sqrt;
    scanf("%d", &number);

    // store the half of the given number e.g from 256 => 128
    sqrt = number / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( number/temp + temp) / 2;
    }

    printf("%.4f", sqrt);
}
