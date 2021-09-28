#include<stdio.h>
#include<conio.h>
int main()
{
    int f=1,i,num;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    f*=i;
        if(num>15)
                 {
                     break;
                 }
     }
     printf("the factorial of %d is %d:",num,f);
    getch();
    return 0;
}
