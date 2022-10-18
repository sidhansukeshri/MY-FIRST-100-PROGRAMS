#include <stdio.h>
int main()
{printf("My regeistration number is RA2211042010032 !");
 double number;
 printf("Enter a number: ");
 scanf("%lf", &number);
 if (number <= 0.0)
 {
  if (number == 0.0)
   printf("You entered 0.");
  else
   printf("You entered a negative number.");
 }
 else
  printf("You entered a positive number.");
 return 0;
}
