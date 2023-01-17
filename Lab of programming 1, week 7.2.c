//NDHU CSIE Lab of programming 1, week 7.2

//Gives N integer, your job is write a program to sort them as given rule. 
//Prime number comes before non-prime number, if both number are prime number, greater number comes before smaller number, if both number are non-prime number, smaller number comes before greater number.
//Input
//Input begin with an integer N and follow by N integer.
//Output
//Display the result.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int total;
    scanf("%d", &total);
    int data[1000] = {0}, prime[1000] = {0}, notprime[1000] = {0};
    int p = 0, n = 0;
    int ans[1000] = {0};
    for(int i = 0; i < total; i++)
    {
        scanf("%d", &data[i]);
        if(data[i] == 1)
        {
            notprime[n] = data[i];
            n++;
            continue;
        }
        bool Prime = true;
        for(int j = 2; (j*j) <= data[i]; j++)
            if((data[i] % j) == 0)
                Prime = false;
        if(Prime) 
        {
            prime[p] = data[i];
            p++;
        }
        else 
        {
            notprime[n] = data[i];
            n++;
        }
    }

    for(int i = p - 2; i >= 0; i--)
        for(int j = 0.; j <= i; j++)
            if(prime[j] < prime[j + 1])
            {
                int temp = prime[j];
                prime[j] = prime[j + 1];
                prime[j + 1] = temp;
            }
    for(int i = n - 2; i >= 0; i--)
        for(int j = 0.; j <= i; j++)
            if(notprime[j] > notprime[j + 1])
            {
                int temp = notprime[j];
                notprime[j] = notprime[j + 1];
                notprime[j + 1] = temp;
            }
    for(int i = 0; i < p; i++)
    {
        ans[i] = prime[i];
    }
    for(int i = p, j = 0; j < n; i++, j++)
    {
        ans[i] = notprime[j];
    }
    for(int i = 0; i < total; i++)
        printf("%d ", ans[i]);
}
