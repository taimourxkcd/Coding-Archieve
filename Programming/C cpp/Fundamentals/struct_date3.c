#include<stdio.h>
#include<conio.h>
struct date
{
 int d;
 int m;
 int y;
};
int main()
{
 struct date r1={8,28,1999},r2;
 printf("value of r1 %d %d %d\n",r1.d,r1.m,r1.y);

 r2=r1;

  printf(" the value of r2 %d %d %d\n",r2.d,r2.m,r2.y);
 getchar();
 return 0;
}
