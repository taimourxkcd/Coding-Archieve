#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 for(i=1; i<=5; i++)
 {
    for(j=5; j>=i; j--)
    {
    printf("%d",j);
    }
  printf("\n");
 }

 int a,e;
 for(a=1; a<=5; a++)
 {
   for(e=1; e<=a; e++)
   {
   printf("%d",e);
   }
  printf("\n");
 }

getchar();
return 0;
}

// 54321
// 5432
// 543
// 54
// 5
// 1
// 12
// 123
// 1234
// 12345