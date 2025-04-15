#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char first[100],second[100];
 printf("Please enter the 1st string\n");
 scanf("%s",first);
  printf("Please enter the 2nd string\n");
 scanf("%s",second);
 strcat(first,second);
 printf("The string after concatation is %s",first);
 getchar();getchar();
 return 0;

}
