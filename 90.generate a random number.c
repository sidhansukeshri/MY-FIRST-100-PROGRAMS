
#include<stdio.h>
#include<stdlib.h>
 int main() {printf("My regeistration number is RA2211042010032 !");
    int n, random;
    printf("Enter number of random numbers\n");
    scanf("%d", &n);
    printf("%d random numbers between 0 to 1000\n", n);
    while(n--){
        random = rand()%1000 + 1;
        printf("%d\n", random);
    }
    getc;
    return 0;
}
