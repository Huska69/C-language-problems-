//NDHU CSIE Lab of programming 1, week 13.1

//In mathematics, the look-and-say sequence is the sequence of integers beginning as follows:
//1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211, 31131211131221, ... (sequence A005150 in the OEIS).
//To generate a member of the sequence from the previous member, read off the digits of the previous member, counting the number of digits in groups of the same digit. For example:
//1 is read off as "one 1" or 11.
//11 is read off as "two 1s" or 21.
//21 is read off as "one 2, one 1" or 1211.
//1211 is read off as "one 1, one 2, two 1s" or 111221.
//111221 is read off as "three 1s, two 2s, one 1" or 312211.
//Write a program to display first N term of look-and-say sequence using Recursion
//Input
//An integer N(N <= 40)
//Output
//first N term each in a single line

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *Look (int a){
    if(a==1){return "1";} //if not a==1
    char *prev=Look(a-1); //recursive
    char *res=malloc(strlen(prev) * 2 + 1); //size
    int i =0, j = 0;
    
    while(i < strlen(prev)){   //for calculating next element
        int count = 1;
        while(i + 1 < strlen(prev) && prev[i] == prev[i + 1]){  
            i++;
            count++;
        }
        res[j++] = count +'0';
        res[j++] = prev[i++];
    }
    res[j] ='\0';
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%s\n", Look(i));
    }
    return 0;
}
