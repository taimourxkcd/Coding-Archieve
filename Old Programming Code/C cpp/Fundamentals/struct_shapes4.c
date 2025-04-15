#include<stdio.h>
#include<conio.h>

struct rect3d
{
 int l;
 int w;
 int d;
};
int comparecube(rect3d,rect3d);

int main()
{
 struct rect3d r1={20,20,20},r2={20,20,20};
  int r;
  r=comparecube(r1,r2);
  if(r==1)
  {printf("Both the given cubes are equal.\n");}
  else
  {printf("Both the given cubes are not equal.\n");}

getchar();
return 0;
}

 int comparecube(rect3d r1,rect3d r2)
 {
  int a=1,b=0;
  if(r1.l==r1.w && r1.l==r1.d && r1.w==r1.d && r2.l==r2.w && r2.l==r2.d && r2.w==r2.d)
    {
      if(r1.l==r2.l && r1.w==r2.w && r1.d==r2.d)
      {return a;}
      else
      {return b;}

   }
 }
