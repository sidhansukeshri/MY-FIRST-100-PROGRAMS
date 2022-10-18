#include <stdio.h>

int main()
{   printf("My regeistration number is RA2211042010032 !");
    printf("enter sales price and cost price");
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        int p=a-b;
        printf("profit=%d",p);
    }
    else
    {
        int l=b-a;
        printf("loss=%d",l);
    }
}
