/*program to take a substring from a given number of strings */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[100],substr[100];
 int length,position,c;
 printf("enter a string\n");
 gets(str);

 printf("\n\nPlease enter the starting point of the substring ");
 scanf("%d",&position);
 printf("\n\nPlease enter the length of the sub string ");
 scanf("%d",&length);

 while(c<length)
 {
  substr[c]=str[position-1+c];
  c++;
 }
  substr[c]='\0';

 printf("\n\nthe sub string from the given string is %s",substr);





 getchar();
 getchar();
 return 0;
}
