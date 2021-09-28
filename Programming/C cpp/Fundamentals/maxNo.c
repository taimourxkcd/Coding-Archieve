#include<stdio.h>
#include<conio.h>
 static inline int max(int a,int b);
int main()
{
 int result,a=10,b=20;
 result=max(a,b);
 printf("the greater number is %d",result);
 getchar();
 return 0;
}

 int max(int x,int y)
 {
  if(x>y){return x;}
  else
  {return y;}
 }
