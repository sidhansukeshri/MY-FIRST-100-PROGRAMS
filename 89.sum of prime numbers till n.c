#include <stdio.h>  
   int main() {printf("My regeistration number is RA2211042010032 !");  
    int counter, N, i, isPrime, primeFactorSum = 0;    
    printf("Enter a Number\n");  
    scanf("%d", &N);   
    for(counter = 2; counter <= N; counter++) {
     isPrime = 1;
        for(i = 2; i <=(counter/2); ++i) {
            if(counter%i==0) {
                isPrime = 0;
                break;
            }
        }
    
        if(isPrime==1)
            primeFactorSum += counter;
    }
    printf("Sum of Prime Numbers between 1 to %d : %d", N,primeFactorSum);
    return 0;  
}
