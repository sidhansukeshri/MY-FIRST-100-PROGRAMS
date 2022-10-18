#include<stdio.h>
main()
{  
   printf("My regeistration number is RA2211042010032 !"); 
    int n,a=1;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d\n",a);
    for(int d=1;d<n;d++)
    {
       if(d%2==0)
       {
           printf("%d\n",d*d);
       }
       else
       {
           printf("%d\n",d*d*d);
       }
    }
}
