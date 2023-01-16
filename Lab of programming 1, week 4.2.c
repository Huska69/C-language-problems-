//NDHU CSIE Lab of programming 1, week 4.2

//Please write a program to do the prime factorization.
//Input
//Input consist several test case. Every test case is just a integer. Input ended with 0.
//Output
//Please reference the sample output.

#include<stdio.h>
int main(){
  int input,i;
  scanf("%d",&input);

  while(input!=0){
    printf("%d = ",input);

        for(i=2; i<=input; i++){
        while(input!=i){
        if(input%i==0){
        printf("%d * ",i);
        input=input/i;
            }else
            break;
        }
    }

    if(input==1){
      printf("");
    }
    printf("%d\n",input);
    scanf("%d",&input);
  }
}
