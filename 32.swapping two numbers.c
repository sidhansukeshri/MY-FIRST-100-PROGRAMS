#include <stdio.h>
int main(){
  int n1,n2,temp;
  printf("Enter value of n1:");
  scanf("%d", &n1);
  printf("\nEnter value of n2:");
  scanf("%d", &n2);
  printf("Before swapping: n1=%d and n2=%d", n1,n2);
  temp = n1;
  n1 = n2;
  n2 = temp;
  printf("\nAfter  swapping: n1=%d and n2=%d", n1,n2);
  return 0;
}
