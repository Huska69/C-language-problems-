//NDHU CSIE Lab of programming 1, week 3.4

//License plate in Taiwan has two part, alphabet and digit like me, my license plate is 0823 in digit part.In Taiwan culture the number 4 is extremely unlucky so you will never see digit 4 appear in a license plate.
//Write a program to read in a 4 digit integer check if digit 4 appear or not.
//Input
//A integer with exact 4 digits
//Output
//print "Yes" if 4 appear, "No" if not.

#include<stdio.h>

int main()
{
	int n,numaPlate,remainder;
	scanf("%d",&numaPlate);
	n=numaPlate;

	while(numaPlate!=0)
	{
		remainder=numaPlate%10;
		if(remainder==4)
		{
			printf("Yes");
			return 0;
		}
		numaPlate/=10;
	}
	printf("No");
	return 0;
}
