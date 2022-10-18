#include <stdio.h>  
   
int main() { printf("My regeistration number is RA2211042010032 !"); 
    int number;  
    printf("Enter a Number\n");  
    scanf("%d", &number);  
    if(number > 0) {  
        printf("%d is Positive Number", number);  
    } else if (number < 0) {  
        printf("%d is Negative Number", number);  
    } else {  
        printf("Input Number is Zero");  
    }  
    return 0;  
}
