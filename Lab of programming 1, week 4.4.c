//NDHU CSIE Lab of programming 1, week 4.4

//A mathmatician Goldbach's conjecture: any even number(larger than 2) can divide into two prime number’s sum.But some even numbers can divide into many pairs of two prime numbers’ sum.
//Example:10 =3+7, 10=5+5, 10 can divide into two pairs of two prime number.
//Input
//Input consist a positive number n(4<=n<=32766).
//Output
//Print the value of how many pairs are this even number can be divided into.


#include <stdio.h>
#define Max 32766

int isPrime[Max]; //2 empty array
int table[Max];
int findPrime(){
  int i,j,cnt=0;
  for(i=2;i<Max;++i)  //storing all numbers from 2 to max. which is 32766
    isPrime[i]=1;
  for(i=2;i<Max;++i){  //After this, we create another loop that checks for each number in between 2 and Max whether or not it's a prime number
    if(isPrime[i])
      table[cnt++]=i;
    for(j=i;j<Max;j+=i)
      isPrime[j]=0;
    }
  return cnt;
}

//Dichotomy find the largest element closest to x
int Search(int *a, int n, int x) {
	int right=n-1;
  int left = 0;
  int mid ;
  while(left <= right){  //while loop is just checking if x is less than or equal to any value inside a[mid].
    mid = left + (right - left) / 2; //This will be used later on when it finds the index of a number in an array.
    if(a[mid] < x){
      left = mid + 1;
    }else{            // If not, then it increments mid by 1 again and moves on down until it gets back around to where it started from at 0.
      right = mid - 1;
    }
  }
  return a[right] < x ? right : left;
}

int Goldbach(int *a, int left, int right, int sum) {
	int cnt = 0;
	while (left <= right) {
		if (a[left] + a[right] == sum){ //Then inside the while loop, it checks if both numbers are equal to sum
			++cnt;                        //how many pairs
			++left;                       //If they are equal, move left and right to the center
		} else if (a[left] + a[right] < sum) //if either number is less than or greater than sum, it decreases right or increases left respectively.
			++left;
		else        //If not, it moves left or right depending on which number is smaller in order to center them both.
			--right;
	}
	return cnt;
}

int main() {
	int cnt = findPrime();
	int n;
	while (scanf("%d", &n) != EOF) {   //infinite loop that will continue until end of file.
		if (n == 0) continue;  //If there are no more values in the list, then continue; otherwise, if n equals 0, then we know that we've reached our end point and break out of this loop.
		int right = Search(table, cnt, n);
		printf("%d\n", Goldbach(table, 0, right, n));
	}
}
