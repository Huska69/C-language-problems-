//NDHU CSIE Lab of programming 1, week 7.1

//We can represent a line as format ax+by=c. Gives two line, your job is to write a program to find the intersect of them.
//Input
//Input consist 6 integer represent two line First 3 integer represent a, b and c of first line and other 3 represent a, b and c of second line.
//Output
//Output the intersect in (X, Y) format if exist only one intersect exist. "NO" in other case. If there are decimal point, display to two decimal place.




#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, e, c, d, f;
    scanf("%d%d%d%d%d%d", &a, &b, &e, &c, &d, &f);
    float delta = a*d - b*c;
    float delta_x = e*d - b*f;
    float delta_y = a*f - e*c;
    if (delta != 0)   //if the delta is equal to 0 its not intersection if its we gonna find
    {
        float x = delta_x/delta;
        float y = delta_y/delta;
        printf("(%.2f, %.2f)", x, y);
    }
    else
        printf("NO");
}
