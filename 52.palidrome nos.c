#include <stdio.h>
int main()
{   printf("My regeistration number is RA2211042010032 !");
    printf("enter number");
    int a,r=0;
    scanf("%d",&a);
    int b=a;
    while(b>0)
    {
        r=r*10+b%10;
        b/=10;
    }
    if(a==r)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}
