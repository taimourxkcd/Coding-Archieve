#include<stdio.h>
#include<conio.h>
int sumdigits(int num1);
int main()
{
 int num,result;
 printf("please enter a number ");
 scanf("%d",&num);
 result=sumdigits(num);
 printf("\n\nThe sum of the digits is %d",result);
getchar();getchar();
return 0;
}

int sumdigits(int num1)
{
 static int s=0,r;
 if(num1!=0)
 {
  r=num1%10;
  s=s+r;
  num1=num1/10;
  sumdigits(num1);
 }
 return s;
}
