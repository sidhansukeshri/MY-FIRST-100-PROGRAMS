#include <stdio.h>
int main()
{
    printf("enter 2 numbers : ");
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        printf("smallest is = %d",a);
    }
   else
   {
       printf("smallest is = %d",b);
   }
}
