#include<stdio.h>
#include<conio.h>
int issquare(int rect1, int rect2);
struct rect
{
 int l;
 int w;
 };
int main()
{
 int r;
 struct rect r1={8,28};
 r=issquare(r1.l,r1.w);
 if(r==1)
 {printf("the given length and the width show that the shape is a square");}
 else
 {printf("the given length and the width show that the shape is a rectangle");}


 getchar();
 return 0;
}

 int issquare(int rect1, int rect2)
 {
  if(rect1==rect2)
  {return 1;}
  else{return 0;}

 }

