#include <stdio.h>
int main()
{
    printf("enter 3 numbers : ");
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    if(a<b&&a<c)
    {
        printf("smallest is = %d",a);
    }
   else if(b<a&&b<c)
   {
       printf("smallest is = %d",b);
   }
   else
   {
       printf("smallest is = %d",c);
   }
}
