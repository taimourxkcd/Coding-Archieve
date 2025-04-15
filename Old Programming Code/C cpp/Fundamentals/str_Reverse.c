/*program to print the string in reverse order*/
#include<string.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 char str[100];
 int i,j,temp=0,length;

 printf("Please enter a string \n");
 scanf("%s",str);

 length=strlen(str);

 for(i=0; i<length; i++)
 {
   for(j=0; j=length-i; j++)
   {
     if(str[j]>str[j+1])
     {
     str[j]=temp;
     str[j]=str[j+1];
     str[j+1]=temp;
     }
   }

 }

 printf("The sorted string is as follows.\n%s",str);

 getchar();
 return 0;
}
