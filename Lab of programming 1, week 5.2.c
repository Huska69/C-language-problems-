//NDHU CSIE Lab of programming 1, week 5.2

//The concept of a permutation as an ordered arrangement admits several generalizations that are not permutations, but have been called permutations in the literature.
//k-permutations ofn
//P(n,k)=\underbrace {n\cdot (n-1)\cdot (n-2)\cdots (n-k+1)} _{k\ \mathrm {factors} },
//which is 0 when k>n, and otherwise is equal to
//{\frac {n!}{(n-k)!}}.
//Write a program to calculate P.
//Input
//Two integer n and k which n > k.
//Output
//The result of P(n, k).

#include<stdio.h>

int main(){

    int factn=1,n,k,i, factnk=1, perm, j, nminusk;

    scanf("%d %d",&n, &k);

    for(i=1;i<=n;i++)
        factn=factn*i;   //n factorial
    nminusk = n-k;
    for (j=1; j<=nminusk; j++)  //n-m factorial
        factnk=factnk*j;

    perm = factn/factnk; //n fac / n-m fac
    printf("%d", perm);
    return 0;
}
