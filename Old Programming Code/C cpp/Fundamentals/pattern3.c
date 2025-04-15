#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,k,rows,spc,t=1;
 printf("Enter the number of rows",rows);
 scanf("%d",&rows);
 spc=rows+4-1;
 for(i=1; i<=rows; i++)
 {
    for(k=spc; k>=1; k--)
    {
    printf(" ");
    }

         for(j=1; j<=i; j++)
          {
          printf("%d",t);
          t++;
          }
     
   spc--;
  printf("\n");
 }
getchar();
return 0;
}

//     1
//    2 3
//   4 5 6
// 7 8 9 10 