#include <stdio.h>
main()
{
  float sum=0,height[10];
  printf("Enter height of all 10 students one by one in cm : ");
  for(int a=0;a<10;a++)
  {
      scanf(" %f", &height[a]);
  }
  for (int a=0;a<10;a++)
  {
      sum+=height[a];
  }
  float avg=sum/10;
  printf("average %f", avg);
}
