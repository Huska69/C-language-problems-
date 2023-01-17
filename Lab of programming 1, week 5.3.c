//NDHU CSIE Lab of programming 1, week 5.3

//There is snail climbing on the wall from bottom, wall is 10 meter height. every day the snail climb up 4 meter, and slide down 3 meter at the night. In day 7 the snail climb up to the top of the wall. 
//Please write a program, read in height of the wall, how many meter the snail climb up a day, how many meter the snail slide down at night, give the answer of which day the snail climb up to the top of the wall.
//Input
//Input consist three integer, first is height of the wall, second is meter of snail climb up a day, third is meter the snail slide down at night.
//Output
//Out a number represent in which day the snail will climb to top of the wall. Output -1 if the snail can never climb up the top.

#include<stdio.h>

int main(){
    int height, climb, down, snailpos = 0, day = 0;
    scanf ("%d %d %d", &height, &climb, &down);
    while(1)
    {
        snailpos = snailpos + climb;
        day = day+1;
        if(snailpos>=height)
        {
            printf("%d", day);
            break;
        }
        else if (climb<= down)
        {
            printf("-1");
            break;
        }
        else if(snailpos<height)
        {
            snailpos= snailpos - down;
        }
    }
    return 0;
}
