#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter the first string\n");
  gets(str1);
  printf("Enter the second string\n");
  gets(str2);
  strcat(str1, str2);
  printf("String obtained after joining is: %s\n", str1);
  return 0;
}
