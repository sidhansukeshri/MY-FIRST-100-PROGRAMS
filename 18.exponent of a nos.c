#include <stdio.h>
 int main(){
  int i, Number, Exponent, pw ;
  printf("\n Please Enter any Number : ");
  scanf(" %d", &Number);
  printf("\n Please Enter the Exponent Vlaue: ");
  scanf(" %d", &Exponent);
  pw=pow(Number,Exponent);
  printf("\n The calculated value =%d",pw);
  return 0;
}
