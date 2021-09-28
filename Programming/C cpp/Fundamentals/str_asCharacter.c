#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

 char name[7];
 int i;
 char a[7];

 printf("\n\nPlease enter your name\t");
 gets(name);
 puts("Your input is as follows");
 puts(name);



 for(i=0; i<7; i++)
 {
  a[i]=name[i];
 }

 printf("\n\n the string array is stored in charater array as follows\n");

 for(i=0; i<7; i++)
 {
  printf("%c\n",a[i]);
 }





 getchar();

 getchar();
 return 0;
 }
