//NDHU CSIE Lab of programming 1, week 6.1

//A truncated mean or trimmed mean is a statistical measure of central tendency, much like the mean and median. It involves the calculation of the mean after discarding given parts of a probability distribution or sample at the high and low end, and typically discarding an equal amount of both. 
//This number of points to be discarded is usually given as a percentage of the total number of points, but may also be given as a fixed number of points.Write a program calculate trimmed mean with discarding 3 number from high and low.
//Input
//Input start with a integer N(N > 6) represent the number of sample, fellow by N integer represent the sample.
//Output
//Output trimmed mean round down to second decimal place


#include <stdio.h>

int main()
{
    int n, data[1000] = {0};
    float total = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &(data[i]));
        total += data[i];
    }
    for(int i = n - 2; i >= 0; i--)
        for(int j = 0; j <= i; j++)
            if(data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
    total = total - data[0] - data[1] - data[2] - data[n - 1] - data[n - 2] - data[n - 3];
    printf("%.2f", total/(n - 6));
}
