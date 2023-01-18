//NDHU CSIE Lab of programming 1, week 7.6

//Write a program to convert a decimal to binary.
//Input
//Input a integer number N < 2147483647
//Output
//Binary of the given number.

#include <stdio.h>

void dtob(int num) {
    if (num == 0) {
        printf("0");
        return;
    }

   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;

   for ( ;num > 0; ){   // repeating until number is > 0
      binaryNum[i++] = num % 2;   //dividing number and storing number in arr
      num /= 2;    //dividing that number 2
   }

   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}

int main() {
   int num;
   scanf ("%d", &num);
   dtob(num);
   return 0;
}
