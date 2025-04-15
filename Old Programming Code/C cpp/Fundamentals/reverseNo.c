#include<stdio.h>
#include<conio.h>
int main()
{
int n,reverse=0;
 n=1234;
 printf("The entered number is=%d",n);
 while(n !=0)
 {
 reverse=reverse*10;
 reverse=reverse+n%10;
 n=n/10;
 printf("\n");
 printf("reverse    n\n");
 printf("%d     %d\n",reverse,n);
 }
 printf("\nThe reverse of the entered number is=%d",reverse);
getchar();
return 0;
}

