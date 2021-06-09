#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int foo(int a , int b){

	printf("value of a is %d and value of b is %d\n",a,b);

}

void name(char name_v[3]){
	printf("your name is %s \n",name_v);
}

void a(){
printf("hello i am being called from a function in whose parameter my address was passed from the main\n");

}

int comphelp(int a, int b){
	if(a>b){ return 1;}
	else if(b>a){ return -1;}
	
}


int comp(int a, int b, int (*ptr)(int,int)){
	ptr=comphelp;
	
	if( ptr(a,b) > 0){ printf("%d is greater then %d\n",a,b);}
	else{printf("%d is lesser then %d\n",b,a);}

}




void b(void (*ptr)()){
	ptr=a;
	ptr();

}



int main(){
	
	int (*ptr)(int,int);
	ptr=foo;
	ptr(3,4);
	
	void (*ptr2)(char[]);
	ptr2 = name;
	char h[3] = "tai";
	ptr2(h);

	void (*ptr3)();
	ptr3 = b;
	ptr3();

	comp(1,4,comphelp);

	return 0;
}