#include <stdio.h>
int main(){
    int n;
    printf("enter a number of terms: ");
    scanf("%d",&n);
    int a=0;
    for(int b=1;b<=n;b++)
    {
        a=a*10+b;
        printf("%d,",a);
    }
}
