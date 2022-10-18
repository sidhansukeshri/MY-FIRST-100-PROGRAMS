#include<stdio.h>
int main()
{printf("My regeistration number is RA2211042010032 !");
 int a,b,hcf,lcm,max,min,r;

 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);    
 if(a>b)
  {
   max=a;
   min=b;
  }
   else
    if(b>a)
    {
     max=b;
     min=a;
    }    
    if(a==b)
     hcf=a;
    else
    {
     do
     {
      r=max%min;
      max=min;
      min=r;
     }
     while(r!=0);        
      hcf=max;
   }    
   lcm=(a*b)/hcf;    
   printf(" LCM=%d HCF=%d",lcm,hcf);
   return 0;
}
