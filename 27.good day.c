#include <stdio.h>
int main() {
  printf("My regeistration number is RA2211042010032 !");
  int time = 0;
  printf("enter the time (value must be between 1-24): ");
  scanf("%d",&time);
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}
