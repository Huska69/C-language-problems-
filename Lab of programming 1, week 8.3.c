//NDHU CSIE Lab of programming 1, week 8.3

//Given a string s, find the length of the longest substring without repeating characters.
//Input
//a string without space
//Output
//the longest substring

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[100];
    bool ascii[128] = {0};
    scanf("%s", &s);
    int i,j,k,temp,max,itemp,jtemp,n;
    n = strlen(s);
    i = 0;
    j = 0;
    max = 0;
    while (s[j]!='\0')
    {
        if(ascii[s[j]]==false)
        {
            ascii[s[j]] = true;
            j++;
            temp = j-i+1;
            if (temp > max)
            {
                max = temp;
                jtemp = j;
                itemp = i;
            }
        }
        else if (ascii[s[j]]==true)
        {
            memset(ascii, 0, sizeof(ascii));
            j--;
            temp = j-i+1;
            if (temp > max)
            {
                max = temp;
                jtemp = j;
                itemp = i;
            }
            i++;
            j=i;

        }
    }

    for(int q = itemp; q<jtemp; q++){
        printf("%c", s[q]);
    }
    return 0;
}
