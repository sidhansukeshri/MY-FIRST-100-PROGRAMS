#include<stdio.h>
int main(){printf("My regeistration number is RA2211042010032 !");
   float tempArray[7], sum=0,average;
   int i;
   for(i=0; i<7; i++)
      {
	   printf("Enter Temperature Reading of Day:%d=",i+1);
       scanf("%f", &tempArray[i]);
       sum = sum + tempArray[i];
      }
    average = sum / 7.0;
    printf("The Average Temperature of the week is = %.2f",average);
    return 0;
}
