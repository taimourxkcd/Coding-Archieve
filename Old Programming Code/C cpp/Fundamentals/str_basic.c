#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char name[100];
 printf("\n\nPlease enter your name\t");
 scanf("%s",name);
 getchar();

 printf("\n\nthe first letter of the name is %c ",name[0]);
 printf("\n\nthe first letter of the name is %c ",name[6]);

 printf("\n\nthe length of the string is %d",strlen(name));

 getchar();
 return 0;
 }
