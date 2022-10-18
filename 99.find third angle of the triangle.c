#include <stdio.h>  
#define ANGLE_SUM 180
int main() {printf("My regeistration number is RA2211042010032 !");
    float a1, a2, a3;  
    printf("Enter Two Angles of a Triangle\n");  
    scanf("%f %f", &a1, &a2);  
    a3 = ANGLE_SUM - (a1 + a2);  
    printf("Third Angle = %0.4f", a3);
    return 0;  
}
