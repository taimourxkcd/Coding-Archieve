#include<stdio.h>
#include<conio.h>

int main()
{
 char ch;
 printf("Please enter a charater");
 scanf("%c",&ch);

 switch(ch)
 {
  case  'A' ... 'B':
  printf("The user has entered an uppercase value\n");
  break;

  case 'a' ... 'b':
  printf("The user has entered an lowercase value\n");
  break;

  case '0' ... '9':
  printf("The user has entered a digit\n");
  break;

  default:
  printf("The user has entered a non specified value");
  break;
 }

 getchar();
 return 0;
}
