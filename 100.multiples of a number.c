#include <stdio.h>
int main() {
    int i,n,p;
  printf("My regeistration number is RA2211042010032 !");
  printf ("enter the number of which you want the table of :");
  scanf("%d",&n);
  printf ("The table of %d is as follows:-\n ",n);
  for (i=1;i<=10;i++){
    p=n*i;
  printf("\t\t\t%d x %d = %d\n",n,i,p);}
  printf ("These 100 programs were a lot of fun !\n ");
  return 0;}
