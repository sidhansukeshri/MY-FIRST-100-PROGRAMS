//this code checks if entered integer value is even or odd!
#include <stdio.h>
int main() {
    printf("My regeistration number is RA2211042010032 !\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
