//NDHU CSIE Lab of programming 1, week 12.6

//Please write a program that read in asentence and print it backward.
//Input
//Input will be a sentence content only letter.
//Output
//The backward sentence

#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j, len, startIndex, endIndex;
    char str[1000];

    gets(str);      
    len = strlen(str);
    endIndex = len - 1;
      
    for(i = len - 1; i >= 0; i--){   
            if( i == 0 || str[i] == ' '){
                if(i == 0){
                    startIndex = 0;
                }
                else{
                    startIndex = i + 1;
                }
                for(j = startIndex; j <= endIndex; j++){
                    printf("%c", str[j]);
                }
                endIndex = i - 1;
                printf(" ");                
            }
        }
    return 0;
}
