#include<stdio.h>
#include<conio.h>
#include<string.h>
 int printCalendar(int month,int year,char days[6]);

int main()
{
    int i,month,result,year;
    char days[6]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
   printf("please enter the names of all the days./n");
    printf("Please enter the month in form of digits between 1 and 12./n");
    scanf("%d",&month);
    printf("Please enter the current year./n");
    scanf("%d",&year);
    result=printCalendar(month,year,days[6]);
    getchar();
    return 0;
}

 int printCalendar(int m,int y, char days[6])
 {

   int i,leapyear,j;
   printf("The current year is %d",y);
   printf("If the year entered is a leap year press 1 else 0./n");
   scanf("%d",&leapyear);
   if(month=2 && leapyear=1)
   {
       for(i=0,j=0; i<29,j<7; j++,i++)
       {
      printf("day %d = %d./n ",i,days[j]);
        if(day=6){j=0;}
       }
   }
    else
    {
        if(leapyear==0)
        {
            for(i=0,j=0; i<=31,j<7; i++,j++)
           {
           printf("day %d = %d./n ",i,days[j]);
           if(day==6){j=0;}
           }
    }
 getchar();
 return 0;
