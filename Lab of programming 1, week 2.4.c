//NDHU CSIE Lab of programming 1, week 2.4

//Hashmat is a brave warrior who with his group of young soldiers moves from one place to another tofight against his opponents. 
//Before Fighting he just calculates one thing, the difference between hissoldier number and the opponent’s soldier number. 
//From this difference he decides whether to fight ornot. Hashmat’s soldier number is never greater than his opponent.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int we, they;
    scanf("%d %d", &we, &they);
    int diff =(we-they);
    printf ("%d", abs(diff));
    return 0;
}
