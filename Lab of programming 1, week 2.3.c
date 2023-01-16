//NDHU CSIE Lab of programming 1, week 2.3

//An arithmetic progression or arithmetic sequence (AP) is a sequence of numbers such that the difference between the consecutive terms is constant. For instance, the sequence 5, 7, 9, 11, 13, 15, . . . is an arithmetic progression with a common difference of 2.
//If the initial term of an arithmetic progression isaand the common difference of successive members isd, then then-th term of the sequence ({ \displaystyle  a_{n} }) is given by:
//{\displaystyle a_{n}=a+(n-1)d},
//Write a program to read in the initial term, common difference and a number N, then display the N-th term

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int first,commondiff,nseries, an;
    int sum = 0;
    scanf("%d %d %d", &first, &commondiff, &nseries);
    int nthterm = (first+(nseries-1)*commondiff);
    printf("%d", nthterm);

    return 0;
}
