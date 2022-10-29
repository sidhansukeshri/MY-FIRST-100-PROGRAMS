//this code prints the average value of given two numbers !
#include <stdio.h>
int main(){
    printf("My regeistration number is RA2211042010032 !\n");
    int number1, number2;
    float avg;
    printf("Enter the First Number to find = ");
    scanf("%d",&number1);
    printf("Enter the Second Number to find  = ");
    scanf("%d",&number2);
    int sum = number1 + number2;
    avg = sum/2; 
    printf("The Sum of %d and %d     = %d\n", number1, number2, sum);
    printf("The Average of %d and %d = %.2f\n", number1, number2, avg);
    return 0;
}
