#include<stdio.h>
#include<conio.h>

int HCF(int m,int n);
int main()
{
  int result,m,n;
  printf("please enter two numbers.");
  scanf("%d%d",&m,&n);
  result=HCF(m,n);
  printf("the HCF is %d",result);

}

int HCF(int m, int n)
{
  if(n==0){return m;}

  HCF(n,m%10);

}
