// the output is kinda buggy dont't know why.
#include<stdio.h>
#include<conio.h>
#include<string.h>
char scopy(char s[], char d[]);
int main()
{
 char s[100], d[100];

 printf("please enter the string number 1:.\n");
 gets(s);

 printf("please enter the string number 2:\n");
 gets(d);

 scopy(d,s);
 printf("the string copied is as follows:\n");
 puts(d);



 getchar();getchar();
 return 0;
}

 char scopy(char d[], char s[])
 {
  strcpy(d,s);

 }
