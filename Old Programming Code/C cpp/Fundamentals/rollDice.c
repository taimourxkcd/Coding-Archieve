#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int rolldice();
int main()
{
 int i,result;
 for(i=1;i<10;i++)
 {
  printf("rolling  the dice for %d time.\n",i);
  result=rolldice();
  printf("the result is %d.\n\n",result);
  }
getchar();
return 0;
}

int rolldice()
{
  int n;
  n=rand()%6+1;
  return n;
}
