/*a simple program to search if a character lies in a string or not */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char name[50]="Muhammad Taimour Afzal Khan";
 char x='a';
 if(strchr(name,x)==NULL)
 printf("%c is not found",x);
 else
 printf("%c is found in the string",x);
 getchar();
return 0;
}
