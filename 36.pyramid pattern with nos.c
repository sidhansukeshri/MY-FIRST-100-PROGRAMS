#include<stdio.h>
main()
{ 
    for(int a=1;a<=5;a++)
    {
        for(int b=1;b<6;b++)
        {
            if(b>(5-a))
            {
                printf("%d ",a);
            }
            else
            {
                printf("  ");
            }
        }
        
        printf("\n");
    }
}
