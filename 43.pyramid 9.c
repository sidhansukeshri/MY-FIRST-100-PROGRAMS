#include<stdio.h>
main()
{ 
    for(int a=5;a>0;a--)
    {
        for(int b=5;b>=a;b--)
        {
            printf("%d  ",a);
        }
        printf("\n");
    }
}
