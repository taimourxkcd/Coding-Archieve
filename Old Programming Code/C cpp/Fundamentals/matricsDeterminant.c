/* program to find the determinanat of a matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int mat[2][2];
 int row,col,m,n,ans;

  printf("Please enter a 2*2 matrix\n");
 for(row=0; row<2; row++)
 {
    for(col=0; col<2; col++)
    {
     printf("enter element-%d%d\t",row,col);
     scanf("%d",&mat[row][col]);
    }
 }

 printf("The entered matrix is as folows:\n");

  for(row=0; row<2; row++)
 {
    for(col=0; col<2; col++)
    {
    printf("%d\t",mat[row][col]);
    }
 printf("\n");
 }

 m=mat[0][0]*mat[1][1];
 n=mat[0][1]*mat[1][0];

 ans=m-n;

 printf("the determinant of 2*2 matrix is  %d\n",ans);



getchar();getchar();
return 0;
}
