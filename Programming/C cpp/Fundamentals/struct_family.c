#include<stdio.h>
#include<conio.h>
#include<string.h>
struct person
{
  char name[1000];
  int age;
  char profession[1000];
  char designation[1000];
};


void displayfamily(person,person,person,person);

int main()
{
  struct person f={"ali",50,"army_major","father"},m={"alia",40,"govt_clg_principal","mother"},b={"qasiim",10,"student","brother&son"},s={"ayesha",18,"student","sister&daughter"};

  displayfamily(f,m,b,s);
  getchar();
return 0;
}

 void displayfamily(person f,person m,person b, person s )
 {
   printf("Following are the family memebers:\n\n\n");
   printf("name: %s\nage: %d\nprofession: %s\n relatiopnship: %s\n\n ",f.name,f.age,f.profession,f.designation);
   printf("name: %s\nage: %d\nprofession: %s\n relatiopnship: %s\n\n ",m.name,m.age,m.profession,m.designation);
   printf("name: %s\nage: %d\nprofession: %s\n relatiopnship: %s\n\n ",b.name,b.age,b.profession,b.designation);
   printf("name: %s\nage: %d\nprofession: %s\n relatiopnship: %s\n\n ",s.name,s.age,s.profession,s.designation);

 }
