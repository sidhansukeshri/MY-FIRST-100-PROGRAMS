#include<stdio.h>
 int main(){
        printf("My regeistration number is RA2211042010032 !");
  	int i, number;
  	printf("\n Please Enter the Maximum Limit Value : ");
  	scanf("%d", &number);
    printf("\n Even Numbers between 1 and %d are : \n", number);
  	for(i = 1; i <= number; i++)
  	{if ( i % 2 == 0 ) 
    	{
          printf(" %d\t", i);
    	}
  	}
 	return 0;
}
