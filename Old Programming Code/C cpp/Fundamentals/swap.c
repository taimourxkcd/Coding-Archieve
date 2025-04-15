  /*sdwapping using functions */
#include<stdio.h>
#include<conio.h>
 void swap(int,int);   // function declaration
 int main()
 {
  int a,b;
  printf("\nenter 1st number ");
  scanf("%d",&a);
  printf("\nenter 2nd number ");
  scanf("%d",&b);
  printf("\n\nBEFORE:a = %d and b= %d\n\n",a,b);
  swap(a,b); // calling a function

  getchar();getchar();
  return 0;
 }

  void swap(x,y)
  {
   int c;
   x=c;
   x=y;
   y=c;
  printf("\n\nAFTER:a = %d and b= %d",x,y);
  }
