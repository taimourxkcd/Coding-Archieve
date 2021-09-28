#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int anotherTransaction,balance=100000,ct=0,newpin;
static int pin=1234;

void transaction();
void password();
void balancefunc();
void withdraw();
void deposit();
void changepassword();
void exit();

int main()
{

 transaction();


 getchar();
 return 0;
}

 void transaction()
 {

 int choice;

 password();

   printf("Enter any option to be served!\n\n");
  printf("1. Balance\n");
  printf("2. Withdraw\n");
  printf("3. Deposit\n");
  printf("4. Change password\n");
  printf("5. Exit\n\n");
  scanf("%d",  &choice);

  switch(choice)
  {
    case 1:
     balancefunc();
     break;

    case 2:
    withdraw();
    break;

    case 3:
    deposit();
    break;

    case 4:
    changepassword();
    break;

    case 5:
    exit();
    break;
  }


 }

void password()
{

 int i;

 printf("-W------------------------------------------------\n");
 printf("-E------------------------------------------------\n");
 printf("-L------------------------------------------------\n");
 printf("-C------------------------------------------------\n");
 printf("-O------------------------------------------------\n");
 printf("-M------------------------------------------------\n");
 printf("-E------------------------------------------------\n");
 printf("--------------------------------------------------\n");
 printf("-T------------------------------------------------\n");
 printf("-O------------------------------------------------\n");
 printf("--------------------------------------------------\n");
 printf("-HABIB--------------------------------------------\n");
 printf("-BANK---------------------------------------------\n");
 printf("-PVT----------------------------------------------\n");
 printf("-LTD----------------------------------------------\n");

 printf("\n\n Please enter your 4 digit Pin Code\n\n");

if(ct==0)
{

   for(i=1;i<=3;i++)
   {
   scanf("%d",&pin);
    if(pin==1234){break;}
    if(pin!=1234){printf("You have entered wrong pin code.\n");}
    if(pin!=1234 && i==3){printf("Your card is captured.please contact bank manager\n");getchar();getchar();exit(0);}
    }
}

   if(ct==1)
       {

        for(i=1;i<=3;i++)
            {
            scanf("%d",&pin);
            if(pin==newpin){break;}
            if(pin!=newpin){printf("You have entered wrong pin code.\n");}
             if(pin!=newpin && i==3){printf("Your card is captured.please contact bank manager\n");exit(0);}
             }

       }

}

 void balancefunc()
 {



   printf("your current balance is: %d",balance);

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf("%d", &anotherTransaction);
      if(anotherTransaction == 1)
      {transaction();}


 }

 void withdraw()
 {

   int c_withdraw;

    printf("enter the amount you want to withdraw(MUST BE A MULTIPLE OF 500)\n");
   scanf("%d",&c_withdraw);
    if(c_withdraw>balance)
    {printf("you do not have enough cash\n");}
    if(c_withdraw%500!=0)
    {printf("you can't withdraw beacause the entered amount is not a multiple of 500\n");}
    else
    {balance=balance-c_withdraw;}
    printf("your new balance is %d \n",balance);


      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf("%d", &anotherTransaction);
      if(anotherTransaction == 1)
      {transaction();}

}

void deposit()
{

 int c_deposit;

    printf("Enter the amount you want to deposit");
    scanf("%d",&c_deposit);
    balance=balance+c_deposit;
    printf("your new balance is %d\n",balance);


      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf("%d", &anotherTransaction);
      if(anotherTransaction == 1)
      {transaction();}


}


void changepassword()
  {

   int temp=0,newpin,confirm_pin;

    printf("\n\nPlease enter your current pin code.\n\n");
   scanf("%d",&pin);
   if(pin==1234)
   {
       printf("\n\nPlease enter your new password\n\n");
       scanf("%d",&newpin);
       printf("\nPlease enter your new password to confirm your newpassword.\n");
       scanf("%d",&confirm_pin);
       if(newpin == confirm_pin)
                      {
                        newpin=temp;
                        pin=temp;
                        ct++;
                       }
               else{printf("\nsorry, your password does not match with the new pin.\n");}

   }
   else
   {printf("\n\nYou can not change your pin code becasue you have entered wrong pincode.\n\n");}

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf("%d", &anotherTransaction);
      if(anotherTransaction == 1)
      {transaction();}


  }

  void exit()
  {

   printf("\n\n*******************Thank You for using HBL*******************\n\n");getchar();getchar();
      exit(0);

      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
      scanf("%d", &anotherTransaction);
      if(anotherTransaction == 1)
      {transaction();}

  }
