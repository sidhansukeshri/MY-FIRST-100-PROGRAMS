#include <stdio.h>
int main(){printf("My regeistration number is RA2211042010032 !");
    int n;
    printf("enter a number of terms (enter value between 1-9): ");
    scanf("%d",&n);
    int a=0;
    for(int b=1;b<=n;b++)
        {a=a*10+b;
        printf("%d,",a);}
}
