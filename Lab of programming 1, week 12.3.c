//NDHU CSIE Lab of programming 1, week 12.3

//Write a program that read in an expression and evaluate it then display the answer.
//Input
//One line with the expression, operator and operand are separate by a space.
//Output
//The answer after evaluate.
//You don't have to consider the PEMDAS rules when you do the operation.
//All operation is perform in integer.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num1, num2, answer = 0;
    char operator;
    scanf("%d", &num2);
    answer = num2;

    while(scanf(" %c %d", &operator, &num1) == 2)
    {
        if(operator == '+'){answer += num1;}
        else if(operator == '-'){answer -= num1;}
        else if(operator == '*'){answer *= num1;}
        else if(operator == '/'){answer /= num1;}
        else{return 1;}
    }
    printf("%d", answer);
    return 0;
}
