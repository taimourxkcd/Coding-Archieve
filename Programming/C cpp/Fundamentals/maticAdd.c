/* program to add two matrices  */
#include<stdio.h>
#include<conio.h>
int main()
{
 int mat1[3][3],mat2[3][3],mat3[3][3];
 int row,col,k;

 printf("Please enter the matrice 1:\n");
 for(row=0; row<3; row++)
 {
   for(col=0; col<3; col++)
   {
    scanf("%d",&mat1[row][col]);
   }
 }

  printf("Please enter the matrice 2:\n");
 for(row=0; row<3; row++)
 {
   for(col=0; col<3; col++)
   {
    scanf("%d",&mat2[row][col]);
   }
 }

   for(row=0; row<3; row++)
   {
     for(col=0; col<3; col++)
     {
      mat3[row][col]=mat1[row][col]+mat2[row][col];
     }
   }

   printf("the answer after addition is: \n");

   for(row=0; row<3; row++)
   {
     for(col=0; col<3; col++)
     {
      printf("%d\t",mat3[row][col]);
     }
    printf("\n");
   }
getchar();getchar();
return 0;
}
