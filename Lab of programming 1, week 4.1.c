//NDHU CSIE Lab of programming 1, week 4.1

//There is something we don't know the exact number, but we know that if we modulus the number by 3 will get 2, if we modulus the number by 7 will get 5, if we modulus by 11 will get 7.
//Write a program read in two integer a and b, display all possible number between a and b include a and b.
//Input
//Two integer a and b separate by a single space.
//Output
//All possible number in ascending order separate by a single space.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, i;
    scanf ("%d %d", &first, &second);
      if(first>second){
    for(i=second;i<=first;i++){
      if(i%3==2 && i%7==5 && i%11==7){
        printf("%d ",i);
      }
    }
  }
  else{
    for(i=first;i<=second;i++){
      if(i%3==2 && i%7==5 && i%11==7){
        printf("%d ",i);
      }
    }
  }
    return 0;
}


