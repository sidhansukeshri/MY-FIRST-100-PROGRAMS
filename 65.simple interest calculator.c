#include <stdio.h>
main()
{   printf("My regeistration number is RA2211042010032 !");
    int p,t;
    float r,si;
    printf("enter a principal,rate,time : \n ");
    scanf("%d %f %d",&p,&r,&t);
    si=p*r*t/100;
    printf("simple interest=%f",si);
}
