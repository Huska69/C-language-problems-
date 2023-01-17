//NDHU CSIE Lab of programming 1, week 6.2

//Teacher plane to fail the student who's final score below the average score. Write a program to count the number of student who fail in the course.
//Input
//Input start with an integer N represent the number of students. Following N integer are the student's final score.
//Output
//Number of student who fail

#include <stdio.h>

int main()
{
    int n, data[1000] = {0}, counter=0;
    float total = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &(data[i]));
        total += data[i];
    }

  float average = total/n; 
  for(int i=0; i < n; i++)
  {
    if (data[i] < average)
        counter++;
  }
  printf("%d", counter);
return 0;
}
