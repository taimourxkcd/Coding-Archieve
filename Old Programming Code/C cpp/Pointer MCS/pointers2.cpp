#include<stdio.h>

void PRINT1(char* c) { // int c is also fine
	int i=0;
	while (*(c+i) != '\0') { // *(c+i) and c[i] is also fine
		
		printf("%c", c[i]);
		i++;
	}
}


void PRINT1(const char* c) { 
	int i=0;

	c[0] = 'A';   //  this line will give an error because of the const keyword

	while (*(c+i) != '\0') { // *(c+i) and c[i] is also fine
		
		printf("%c", c[i]);
		i++;
	}
}


int main(){
	
	char c[20]  = "Hello"; // string gets stord in the space for the array 
	char* c = "hello";		// string gets stored as compile time constant and can not be modifed later in the program
	c[0] = 'A';			 //error 
	
	
	char c[20] = "hello";
	PRINT1(c);
	return 0;
}