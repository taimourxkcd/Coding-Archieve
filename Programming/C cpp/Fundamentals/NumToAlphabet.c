#include<stdio.h>
#include<conio.h>
int main()
{
int digit1,digit2,x,y;
printf("enter any two digit number between 25 and 65:");
scanf("%d",&x);
digit1=x%10;
y=x-digit1;
switch(y)
{
 case 20: printf("twenty-"); break;
 case 30: printf("thirty-"); break;
 case 40: printf("fourty-"); break;
 case 50: printf("fivty-") ; break;
 case 60: printf("sixty-") ; break;
 default:  break;
}
  switch(digit1)
{
 case 1: printf("one\n")  ; break;
 case 2: printf("two\n")  ; break;
 case 3: printf("three\n"); break;
 case 4: printf("four\n") ; break;
 case 5: printf("five\n") ; break;
 case 6: printf("six\n")  ; break;
 case 7: printf("seven\n"); break;
 case 8: printf("eight\n"); break;
 case 9:printf("nine\n")  ; break;
 default: break;
 }
getch();
return 0;
}
