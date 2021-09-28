#include<stdio.h>
#include<conio.h>
struct rect
{
 int length;
 int width;
};
int main()
{
 struct rect r1,r2;
 r1.length=30;
 r2.width=40;
 printf("Length: %d\nWidth: %d",r1.length,r2.width);
 getchar();
 return 0;
}
