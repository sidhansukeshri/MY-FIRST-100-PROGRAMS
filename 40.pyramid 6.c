#include<stdio.h>
main()
{ printf("My regeistration number is RA2211042010032 !");
    int c=1;
    for(int a=1;a<5;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",c);
        }
        printf("\n");
        c+=2;
    }
}
