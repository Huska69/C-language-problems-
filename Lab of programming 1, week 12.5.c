//NDHU CSIE Lab of programming 1, week 12.5

//F(x) = 3x + 1
//G(x, y) = xy - 3
//Write a program to evaluate the given expression.
//Input
//An expression, all number are integer.
//Output
//the result after evaluate.

#include <stdio.h>

char expr[1000];
int i;

int answer(){
    i += 2;   //index for starting the from 1st character
    while(expr[i] == '(' || expr[i] == ')' || expr[i] == ' ' || expr[i] == ',')
    i++;

    if(expr[i] == 'F'){return 3 * answer() + 1;}                   //F 
    else if(expr[i] == 'G'){return answer() * answer() - 3;}       //G
    else{
        int temp = 0;
        while(expr[i] >= '0' && expr[i] <= '9'){
            temp = temp * 10 + expr[i] - '0';
            i++;
        }
        return temp;
    }
}

int main(){
    i = -2;   //index for starting the from 1st character
    gets(expr);
    printf("%d", answer());
    return 0;
}
