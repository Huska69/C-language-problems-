//NDHU CSIE Lab of programming 1, week 2.1

//Write a programming to display ACSII code table with character, decimal value, octal value and hexadecimal value in range '0' to '9', 'a' to 'z' and 'A' to 'Z'.
//If you just printf everything, you can only get 70, you have to use specifier in format string to get 100.
//Input
//NONE
//Output
//See sample output 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for (a ='0'; a <= '9'; a++)
        printf("%c %d %o %x\n", a, a, a, a);
    for (a ='A'; a <= 'Z'; a++)
        printf("%c %d %o %x\n", a, a, a, a);
    for (a ='a'; a <= 'z'; a++)
        printf("%c %d %o %x\n", a, a, a, a);
    return 0;
}
