#include<stdio.h>
#include<math.h>
int main(){printf("My regeistration number is RA2211042010032 !");
	long int binNum,rem,n,i,decimal;
	printf("Enter a Binary Number:");
	scanf("%ld",&binNum);
	i=0;
	decimal=0;
	for(n=binNum;n!=0;n=n/10)
	{
		rem=n%10;
		decimal=decimal+rem*pow(2,i);
		i++;
	}
	printf("Decimal Number:%ld ",decimal);
	return 0;
}
