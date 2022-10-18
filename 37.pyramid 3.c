#include<stdio.h>
main()
{ printf("My regeistration number is RA2211042010032 !");
    int c=1;
    for(int a=1;a<=4;a++)
    {
        for(int b=1;b<5;b++)
        {
            if(b>(5-a))
            {
                printf("%d   ",c);
                c++;
            }
            else
            {
                printf("    ");
            }
        }
        
        printf("\n");
    }
}
