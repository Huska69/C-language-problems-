//NDHU CSIE Lab of programming 1, week 6.3

//Your job is, given a positive number N, determine if it is a multiple of eleven.
//Input
//The input is a file such that each line contains a positive number. A line containing the number ‘0’ is
//the end of the input. The given numbers can contain up to 1000 digits.
//Output
//The output of the program shall indicate, for each input number, if it is a multiple of eleven or not.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        char num[1][1000], temp[1][1000];
        scanf("%s", num);
        strcpy(temp, num);
        int len = strlen(num), odd = 0, even = 0;
        //printf("%d\n", len);
        //printf("%d\n", num[0][0]);
        for(int i = 0; i < len; i++)
        {
            num[0][i] = (int)num[0][i] - 48;
            //printf("%d ", num[0][i]);
            if((i + 1) % 2 != 0)
                odd += num[0][i];
            else
                even += num[0][i];
        }
        if(odd == even && odd == 0)
            break;
        //printf("%d %d\n", odd, even);
        if(abs(odd - even) % 11 == 0)
            printf("%s is a multiple of 11.\n", temp);
        else
            printf("%s is not a multiple of 11.\n", temp);
    }
}
