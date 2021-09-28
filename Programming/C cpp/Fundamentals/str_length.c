#include<stdio.h>
#include<conio.h>
#include<string.h>
int stringlength(char str[100]);
int main()
{
 char str[100];
 int result;
 printf("please enter a string.\n");
 gets(str);
 result=stringlength(str);
 printf("the string length is %d",result);
 getchar();getchar();
 return 0;
}

int stringlength(char str1[100])
{
 int n;
 n=strlen(str1);
 return n;
}
