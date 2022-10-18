#include <stdio.h>
main()
{   printf("My regeistration number is RA2211042010032 !");
    float mm,cm,mtr;
    printf("enter lenght in millimeter: ");
    scanf("%f",&mm);
    cm=mm/10;
    mtr=mm/1000;
    printf("%f mm in cm=%f\n ",mm,cm);
    printf("%f mm in meter=%f\n",mm,mtr);
}
