//NDHU CSIE Lab of programming 1, week 10.3
/*
Function getMaxElement gets two parameter array and n, array is an integer array, n representing the number of element in array.
Please return the maximum element in array
*/

#include <stdio.h>
int getMaxElement(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    if (array[i]> max)
    max = array[i];
    return max; 
};
int main(){
    int array[] = {9, 4, 5, 6, 7, 8};
    int n = sizeof(array)/sizeof(array[0]);
    printf ("%d", getMaxElement(array, n));
    return 0;
}
