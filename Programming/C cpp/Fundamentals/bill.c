/*

Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow : Unit 	Charge/unit 
upto 199 	@1.20 
200 and above but less than 400 	@1.50 
400 and above but less than 600 	@1.80 
600 and above 	@2.00 

*/


#include<stdio.h>
#include<conio.h>
int main()
{
int id,cas;
float bill,units,sur;
char name[20];
printf("enter your customer id:");
scanf("%d",&id);
printf("enter your name:");
scanf("%s",name);
printf("enter your consumed units:");
scanf("%f",&units);

if(units>=0 && units<=199)
 cas=1;
 else if(units>=200 && units<400)
 cas=2;
 else if(units>=400 && units<600)
 cas=3;
 else if(units>=600)
 cas=4;

printf("\n\nCustomer IDNO :%d\n",id);
printf("Customer Name :%s\n",name);
printf("unit Consumed :%f\n",units);

switch(cas)
{
case 1:
bill=units*1.20 ; printf("Amount Charges @Rs. 1.20 per unit: %f",bill); break;
case 2:
bill=units*1.50 ; printf("Amount Charges @Rs. 1.50 per unit: %f",bill); break;
case 3:
bill=units*1.80 ; printf("Amount Charges @Rs. 1.80 per unit: %f",bill); break;
case 4:
bill=units*2.00 ; printf("Amount Charges @Rs. 2.00 per unit: %f",bill); break;
default : break;
}
if(bill<100)
printf("Amount Charges  per unit: 100");
if(bill>400)
{
sur=bill*15/100;
printf("\nSurchage Amount :%f",sur);
bill=bill+sur;
printf("\nNet Amount Paid By the Customer :%f",bill);
}
getch();
return 0;
}
