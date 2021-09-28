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
 struct date r1={8,28},r2={29,2};
 printf("%d %d %d\n",r1.d,r1.m,r1.y);
  printf("%d %d %d\n",r2.d,r2.m,r2.y);
 getchar();
 return 0;
}
