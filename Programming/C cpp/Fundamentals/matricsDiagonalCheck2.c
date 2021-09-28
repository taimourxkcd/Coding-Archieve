/* program to check an lower diagonal matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int mat[3][3];
 int row,col,ct1=0;

  printf("Please enter a 3*3 matrix\n");
 for(row=0; row<3; row++)
 {
    for(col=0; col<3; col++)
    {
     printf("enter element-%d%d\t",row,col);
     scanf("%d",&mat[row][col]);
    }
 }

 for(row=0; row<3; row++)
 {
    for(col=0; col<3; col++)
    {
     if(row<col && mat[row][col]==0)
     ct1++;
    }
 }

 if(ct1==3)
 {printf("The given matrix is a lower triangular matrix");}
 else
 {printf("The given matrix is not a lower triangular matrix");}

getchar();getchar();
return 0;
}
