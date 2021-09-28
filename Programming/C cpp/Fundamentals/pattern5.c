#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
 for(i=1; i<=5; i++)
 {
    for(j=6; j>=i; j--)
    {
    printf("%d",j);
    }
   printf("\n");
 }
getchar();
return 0;
}


// 6   5   4   2   1
// 6   5   4   2
// 6   5   4
// 6   5
// 6   

