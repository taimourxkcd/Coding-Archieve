#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,l;
 printf("please enter two numbers: ");
 scanf("%d%d",&a,&b);

 l=(a>b?a:b);
 for(l=l;l<=a*b;l++)
 {
   if(l%a==0 && l%b==0)
   break;
 }
 printf("\n\nThe LCM of %d and %d is %d",a,b,l);
}
