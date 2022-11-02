//this code prints a pyramid patten using for loop and numbers !
//my reg no is RA2211042010032
#include<stdio.h>
main()
{ printf("My regeistration number is RA2211042010032 !\n");
    int c=1;
    for(int a=0;a<5;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d  ",c);
            c++;
        }
        printf("\n");
        c++;
    }
}
