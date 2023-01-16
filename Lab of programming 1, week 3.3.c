//NDHU CSIE Lab of programming 1, week 3.3

//Tollway in Taiwan charge 1.2 dollar pre KM. If the total distance exceeded 200 KM in one trip then the exceeded part can get 25% discount.
//Write a program tocalculate the total toll in one trip.
//Input
//An integer represent the distance in KM.
//Output
//A number round off to the nearest whole number represent the toll.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km1, km2 = 200;
    scanf("%d", &km1);
    float fee = 1.2;

    if (km1 < km2){
    float total = (km1*fee);
    printf("%.0f", roundf(total*100)/100);}

    else{
        float fee2 = 1.2/4*3;
        float total2 = (km2*fee)+(km1-km2)*fee2 ;
        printf("%.0f", roundf(total2*100)/100);
    }
    return 0;
}
