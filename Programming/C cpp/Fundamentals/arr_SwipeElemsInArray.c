       /* program to swipe the elements in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[10],n1,n2,i;
 printf("Enter 10 numbers");
 for(i=0; i<10; i++)
 {
  scanf("%d",&a[i]);
 }

 printf("Enter the number you want to replace");
 scanf("%d",&n1);

 printf("Enter the number with which you want to replace");
 scanf("%d",&n2);

 for(i=0; i<10; i++)
 {
  if(a[i]==n1)
  a[i]=n2;
 }

 printf("Updated array");

 for(i=0; i<10; i++)
 {
  printf("\n%d",a[i]);
 }

getchar();getchar();
return 0;
}
