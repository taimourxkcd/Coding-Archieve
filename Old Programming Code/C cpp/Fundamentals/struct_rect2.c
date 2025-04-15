#include<stdio.h>
#include<conio.h>

struct rect3d
{
 int l;
 int w;
 int d;
};



int main()
{
 struct rect3d r1={20,76,34};
  printf("Length: %d, width: %d, Depth: %d",r1.l,r1.w,r1.d);


getchar();
return 0;
}
