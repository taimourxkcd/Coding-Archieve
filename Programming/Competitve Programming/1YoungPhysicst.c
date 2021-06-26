// Checks if the body is in the equilibrium or not given that a number of forces are applied on it
// 

#include<stdio.h>

int main()
{
    int n , x, y, z;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0, sum3 =0 ;
    while(n--)
    {
        scanf("%d%d%d",&x,&y,&z);
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
    if(sum1 ==0 && sum2 == 0 && sum3 ==0)
    printf("yeas");
    else
    printf("No");
    
    
}