/*  program to check an identity matrix */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[2][2];
 int i,j,ct1=0,ct2=0;

 printf("Please enter a 2*2 matrix\n");
 for(i=0; i<2; i++)
 {
    for(j=0; j<2; j++)
    {
     printf("enter element-%d%d\t",i,j);
     scanf("%d",&arr[i][j]);
    }
 }

  for(i=0; i<2; i++)
 {
    for(j=0; j<2; j++)
    {
     if(i==j && arr[i][j]==1)
     {ct1++;}
     if(i!=j && arr[i][j]==0)
     {ct2++;}
    }
 }

 if(ct1==1 && ct2==1)
 {printf("Yes the given matrix is an idntity matrix");}
 else
 {printf("No the given matrix is not an identity matrix");}

getchar();getchar();
return 0;
}

