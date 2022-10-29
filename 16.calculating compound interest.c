//this code prints the compound interest !
#include<stdio.h>
#include<math.h>
 int main() {
   printf("My regeistration number is RA2211042010032 !\n");
   float PAmount, ROI, Time_Period, CIFuture, CI;
   printf("Please enter the Principal Amount : \n");
   scanf("%f", &PAmount);
   printf("Please Enter Rate Of Interest : \n");
   scanf("%f", &ROI);
   printf("Please Enter the Time Period in Years : \n");
   scanf("%f", &Time_Period);
   CIFuture = PAmount * (pow(( 1 + ROI/100), Time_Period));
   CI = CIFuture - PAmount;
   printf("\nFuture Compound Interest for Principal Amount %.2f is = %.2f", PAmount, CIFuture);
   printf("\nCompound Interest for Principal Amount %.2f is = %.2f", PAmount, CI);
   return 0;
}
