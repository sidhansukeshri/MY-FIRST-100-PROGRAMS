#include <stdio.h>
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}
int main() {
  printf("My regeistration number is RA2211042010032 !");
  myFunction("sid", 18);
  myFunction("jassan", 19);
  myFunction("dubey", 20);
  return 0;
}
