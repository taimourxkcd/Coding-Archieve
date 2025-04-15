#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j=1,n,prime=1,count=0;
 do
 {
 i=2;
 prime=1;
 printf("please enter a positive number:%d\t",j);
 scanf("%d",&n);
 if(n==1)
 continue;
 if(n==2)
 {
 count++;
 prime=0;
 }
 else
 {
 while(i<=n/2)
 {
 if(n%i==0)
 {
 prime=0;
 break;
 }
 i++;
 }
 }
 if(prime!=0)
 count++;
 j++;
 }while(j<=20);
printf("\n\n THE TOTAL PRIME NUMBERS YOU HAVE ENTERED ARE=%d",count);
getchar();
getchar();getchar;
return 0;
}
