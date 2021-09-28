 /*a program to count the number of digits in a strings and the number of characters*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int i,ct1=0;
 char str[100];
 printf("Please enter a sentence containing both digits and alphabets\n");
 gets(str);
 printf("\n\nthe string contains %d number of characters",strlen(str));


    while(str[i]!='\0')
    {
     if(str[i]>='0' && str[i]<='9')

            ct1++;


        i++;
    }
   printf("\n\nthe string contains %d number of digits",ct1);
getchar();
return 0;
}
