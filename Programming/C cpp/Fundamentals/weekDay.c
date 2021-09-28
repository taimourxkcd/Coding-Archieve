#include<stdio.h>
#include<conio.h>
void main()
{
int day;
printf("enter the number of day:\t\n");
scanf("%d",&day);
switch(day){
case 1:printf("the day is Monday ");break;
case 2:printf("the day is TUESDAY");break;
case 3:printf("the day is Wednesday");break;
case 4:printf("the day is Thursday");break;
case 5:printf("the day is Friday");break;
case 6:printf("the day is Saturday");break;
case 7:printf("the day is Sunday");break;
}
getch();
}
