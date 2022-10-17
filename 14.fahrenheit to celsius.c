#include<stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("My regeistration number is RA2211042010032 !");
    printf("Enter Temperature Value (in Fahrenheit): ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)/1.8;
    printf("\nEquivalent Temperature (in Celsius) = %0.2f", celsius)
return 0;}
