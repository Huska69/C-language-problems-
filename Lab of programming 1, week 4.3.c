//NDHU CSIE Lab of programming 1, week 4.3

//Write a program to calculate the sum and average of numbers.
//Input
//Input will start with a single line contain an integer N represent the number of data.
//The following N number are the data for your program to calculate the sum and average.
//Output
//Please show two number on screen, first number represent the sum and second number represent the average. For average your program should display to second decimal place.

#include<stdio.h>

int main(){
  int neg=0,n,sum=0;
  float average=0;
  scanf("%d",&n);

        while(neg<n){
        int m;
        scanf("%d",&m);
        sum=sum+m;
        neg++;
  }

  average = sum/1.0/n;
  printf("%d %.2f",sum,average);
  return 0;
}
