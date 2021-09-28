#include<stdio.h>
#include<conio.h>

struct rect3d
{
 int l;
 int w;
 int d;
};

int iscube(rect3d);

int main()
{
 struct rect3d r1={20,20,20};
  int r;
  r=iscube(r1);
  if(r==1)
  {printf("The given length width and depth show that the shape is a cube.\n");}
  else
  {printf("The given length width and depth show that the shape is not a cube.\n");}

getchar();
return 0;
}

 int iscube(rect3d r1)
 {
  int a=1,b=0;
  if(r1.l==r1.w && r1.l==r1.d && r1.w==r1.d)
  {return a;}
  else
  {return b;}
 }
