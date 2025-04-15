#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,quadrant;
printf("input x coordinate:");
scanf("%d",&a);
printf("Input y coordinate: ");
scanf("%d",&b);
if (a>0 && b>0)
quadrant = 1;
else if(a<0 && b>0)
quadrant = 2;
else if(a<0 && b<0)
quadrant = 3;
else if(a>0 && b<0)
quadrant = 4;
switch(quadrant )
{
case 1: printf("The point lies in %d quadrant",quadrant); break;
case 2: printf("The point lies in %d quadrant",quadrant); break;
case 3: printf("The point lies in %d quadrant",quadrant); break;
case 4: printf("The point lies in %d quadrant",quadrant); break;
default: printf("Invalid number"); break;
}
getch();
return 0;
}
