#include<stdio.h>
#include<conio.h>

struct rect
{
 int l;
 int w;
};

int compare(rect r1, rect r2);

int main()
{
 struct rect r1,r2;
 int r;
 r1.l=10;
 r1.w=20;
 r2.l=30;
 r2.w=45;
 r=compare(r1,r2);
 if(r==1)
 {printf("After comparing both shapes it is evident that both shapes are equal.\n");}
  else
 {printf("After comparing both shapes it is evident that both shapes are not equal.\n");}
getchar();
return 0;
}

int compare(rect r1, rect r2)
{
 int a=1,b=0;
 if(r1.l==r2.l && r1.w==r2.w)
 {return a;}
 else
 {return b;}
}
