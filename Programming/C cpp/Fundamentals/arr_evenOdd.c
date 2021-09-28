 /* program to count even and odd numbers in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[10],i,c1=0,c2=0;
 printf("Enter 10 numbers\n");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr[i]);
 }

 for(i=0; i<10; i++)
 {
  if(arr[i]%2==0)
  {c1++;}
  else
  {c2++;}
 }

 printf("total number of even numbers are: %d.\n Total number of odd numbers are: %d\n",c1,c2);

getchar();getchar();
return 0;
}
