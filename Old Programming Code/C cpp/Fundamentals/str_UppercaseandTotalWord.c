/*program to convert a string in upper case and count the number of words */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[100];
 int length,c,word=0;
 printf("enter a string\n");
 gets(str);

 printf("\n\nThe string in uppercase letters is as follows:\n\n");
 puts(strupr(str));

 length=strlen(str);

 for(c=0; c<length; c++)
 {
  if(str[c]!= ' ' && str[c+1]== ' ')
  {word++;}
 }

 printf("\n\nThe total number of the words in the given string are %d ",word);





 getchar();
 getchar();
 return 0;
}
