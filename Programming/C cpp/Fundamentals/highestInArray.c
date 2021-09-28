/* program to print highest and second highest number in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[10],i,max=-32767,smax=-32768;
 printf("Enter 10 numbers: \n");
 for(i=0; i<10; i++)
 {
  scanf("%d",&arr[i]);
 }

 for(i=0; i<10; i++)
 {
    if(arr[i]>max)
     {smax=max;
     max=arr[i];}
    else
     {if(arr[1]>smax&&arr[i]!=max)
     smax=arr[i];}
 }
 printf("Highest number is %d\n",max);
 printf("second highest number is %d\n",smax);
getchar();getchar();
return 0;
}

