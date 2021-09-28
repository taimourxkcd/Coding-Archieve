#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 for(i=1; i<=5; i++)
 {
   for(j=1; j<=i; j++)
   {
   printf("%d",j);
   }
  printf("\n");
 }

 int a,e,u=4;
 for(a=1; a<=4; a++)
 {

   for(e=1;e<=(u+1-a); e++)
   {
   printf("%d",e);
   }
  printf("\n");
 }
getchar();
return 0;
}

// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1