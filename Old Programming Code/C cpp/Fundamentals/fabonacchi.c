#include<stdio.h>
#include<conio.h>
void fab();
int main()
{
 int result;
 fab();
 
 getchar();
 return 0;
}

 void fab()
 {
  static int a=-1;
  static int b=1;
  static int c;
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
  while(c<=34)
  {fab();}
 }
