#include<stdio.h>
#include<conio.h>
#include<string.h>
 void table(int x, int i);
int main()
{
    int num,i;
    printf("Please enter a number to print its table till 10.\n");
    scanf("%d",&num);
     for(i=1;i<=100;i++)
           {
            table(num,i);
           }


   getchar();
  return 0;
}

void table(int x,int i)
{

 printf("%d * %d = %d.\n",x,i,x*i);getchar();


}
