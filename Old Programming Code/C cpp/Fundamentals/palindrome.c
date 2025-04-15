#include<stdio.h>
#include<conio.h>
 int main()
 {
 int num,x,r;
 printf("Please ernter a 3 digit number.\n");
 scanf("%d",&num);
 x=num;
  while(x!=0)
  {
   r=r*10;
   r=r+x%10;
   x=x/10;
  }

  if(num==r){
  printf("\n\nThe reverse of the number is %d",r);
  printf("\n\n%d is a palindrome number",num);}
  else
  {printf("\n\nThe number entered is not a palindrome number.");}

      getchar();
 getchar();
 return 0;
 }

