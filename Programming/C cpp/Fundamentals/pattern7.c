#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,a,b;
 for(i=1; i<=5; i++)
 {
    for(j=1; j<=i; j++)
    {
    printf("* ",j);
    }
   printf("\n");
 }

 for(a=1; a<=4; a++)
 {
    for(b=1; b<=(5-a); b++)
    {
    printf("* ");
    }
  printf("\n");
 }
getchar();
return 0;
}

// *   
// **
// ***
// ****    
// *****
// ****
// ***
// **
// *