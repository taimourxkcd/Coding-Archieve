/* program to print minimum number in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[10],i,min;
 printf("Enter 10 numbers");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr[i]);
 }

 printf("please enter a number from the array to be minimum\n");
 scanf("%d",&min);
 for(i=0; i<10; i++)
 {
  if(arr[i]<min)
  min=arr[i];
 }

  printf("the minimum numkber from the given array is %d \n", min);
getchar();getchar();
return 0;
}
