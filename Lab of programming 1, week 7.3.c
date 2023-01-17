//NDHU CSIE Lab of programming 1, week 7.3

//The standard deviation is define as below. Gives N element in integer, write a program to calculate the standard deviation.
//The standard deviationσdefined as
//Input
//Input begin with an integer N and follow by N integer.
//Output
//Display the standard deviation to two decimal place.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, data[1000] = {0};
    float total = 0.0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
        total += data[i];
    }

    float average = total/n;
    float Total = 0.0;
    for(int i = 0; i < n; i++)
    {
        Total += ((data[i] - average)*(data[i] - average));
    }
    Total = sqrt(Total/n);
    printf("%.2f", Total);
}
