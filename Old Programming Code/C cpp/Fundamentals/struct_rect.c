#include<stdio.h>
#include<conio.h>
void displayrect(int rect1, int rect2);
struct rect
{
 int l;
 int w;
 };
int main()
{
 struct rect r1={8,28};
 displayrect(r1.l,r1.w);



 getchar();
 return 0;
}

 void displayrect(int rect1, int rect2)
 {
  printf("the values of r1 are %d and %d",rect1,rect2);
  getchar();
 }
