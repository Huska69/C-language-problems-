//NDHU CSIE Lab of programming 1, week 7.4

//Gives a sequences S we define the increasing subsequence as below.
//Write a program to find the maximum m.
//Input
//Input begin with an integer n and follow by n integer.
//Output
//Print the maximum m value

#include <stdio.h>

int main()
{
    int n, data[1000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    int Long = 0, count[1000] = {0}, j = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(data[i] <= data[i + 1])
        {
            Long++;
            if(i + 1 == n - 1)
            {
                count[j] = Long;
                j++;
                Long = 0;
                break;
            }
        }
        else
        {
            count[j] = Long;
            j++;
            Long = 0;
        }
    }
    int big = count[0];
    for(int i = 1; i < j; i++)
    {
        if(big < count[i])
            big = count[i];
    }
    printf("%d", big);
}
