  /* program to sum two arrays in a program */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr1[10],arr2[10],arr3[10],i;
 printf("Please enter 10 numbers in array 1");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr1[i]);
 }

 printf("Please enter 10 numbers in array 2");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr2[i]);
 }

 for(i=0; i<10; i++)
 {
  arr3[i]=arr1[i]+arr2[i];
 }

 printf("The sum of elements of two arrays is");

 for(i=0; i<10; i++)
 {
  printf("%d\n",arr3[i]);
 }

getchar();getchar();
return 0;
}
