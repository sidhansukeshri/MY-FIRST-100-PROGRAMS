#include <stdio.h>
int main(){
int n, r;
 printf("My regeistration number is RA2211042010032 !");
 printf("Please enter a number: ");
 scanf("%d",&n);
 for(r=0;n>0;n=n/10)
 {r = r * 10;
  r = r + n%10;}
  printf("Reversed number is = %d: ", r);
 return 0;
}
