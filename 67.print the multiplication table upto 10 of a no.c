#include<stdio.h>
main()
{   printf("My regeistration number is RA2211042010032 !");
    int b;
    printf("enter the number for which you need the table upto multiple of 10 : ");
    scanf(" %d",&b);
  for (int a=1;a<=10;a++)
  {
      int p=b*a;
      printf(" %d\n",p);
  }
}
