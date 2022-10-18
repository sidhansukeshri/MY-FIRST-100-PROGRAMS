#include <stdio.h>
int main()
{   printf("My regeistration number is RA2211042010032 !");
    printf("enter number : ");
    int a;
    scanf("%d",&a);
    printf("enter number to be divide : ");
    int n;
    scanf("%d",&n);
    if(a%n==0)
    {
        printf("divisible by %d",n);
    }
    else
    {
        printf("not divisible by %d",n);
    }
}
