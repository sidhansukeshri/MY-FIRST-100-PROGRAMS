#include<stdio.h>
int main(){printf("My regeistration number is RA2211042010032 !");
  int n,i;
  printf("Enter a number to show natural numbers from 1 to N:");
	scanf("%d", &n);
	printf("Numbers from 1 to %d are:\n",n);
	for(i=1;i<=n;i++)
	printf("%d\n", i);
  return 0;
}
