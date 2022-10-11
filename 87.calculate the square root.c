#include <stdio.h>
#include <math.h>
    int main () {
    double x, result;
    printf("Enter a number\n");
    scanf("%lf", &x);
    result = sqrt(x);
    printf("Square root of %lf = %lf\n", x, result);
    return 0;
}
