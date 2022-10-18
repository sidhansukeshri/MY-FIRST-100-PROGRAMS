#include <stdio.h>
int main()
{printf("My regeistration number is RA2211042010032 !");
 long long n;
 int count = 0;
 printf("Enter an integer: ");
 scanf("%lld", &n);
 while(n != 0)
 {
  n /= 10;
  ++count;
 }
 printf("Number of digits: %d", count);
}
