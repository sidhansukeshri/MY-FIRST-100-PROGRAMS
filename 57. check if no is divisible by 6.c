#include <stdio.h>
int main()
{   printf("My regeistration number is RA2211042010032 !");
    printf("Enter number : ");
    int a;
    scanf("%d",&a);
    if(a%6==0)
    {
        printf("divisible by 6");
    }
    else
    {
        printf("not divisible by 6");
    }
}
