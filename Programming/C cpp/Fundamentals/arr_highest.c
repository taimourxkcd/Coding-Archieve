/* program to print highest number in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[10],i,max;
 printf("Enter 10 numbers");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr[i]);
 }

 printf("please enter a number from the array to be maaximum\n");
 scanf("%d",&max);
 for(i=0; i<10; i++)
 {
  if(arr[i]>max)
  max=arr[i];
 }

  printf("the highest numkber from the given array is %d \n", max);
getchar();getchar();
return 0;
}
