//this code prints the product of two floating numbers!
#include <stdio.h>
int main() {
    printf("My regeistration number is RA2211042010032 !\n");
    double a, b, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);  
    product = a * b;
    printf("Product = %.2lf", product);
    return 0;
}
