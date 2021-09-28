#include<stdio.h>
#include<conio.h>
#include<math.h>

 double Power(double x,double y);

 int main()
 {

  int n,p,result;

  printf("Please enter a number.\n");
  scanf("%d",&n);
  printf("Please enter the power of the number.\n");
  scanf("%d",&p);
  result= Power(n,p);
  printf("The %d POWER of %d is :%d",p,n,result);
  getchar();
  return 0;
 }

 double Power(double x, double y)
 {
  double z;
  z=pow(x,y);
  return z;
 }
