#include<stdio.h>

int main(){
	/*
	int B[2][3] = {1,2,3,4,5,6};
	
	/*int B[0][0] = 1;
	int B[0][1] = 2;
	int B[0][2] = 3;
	int B[1][0] = 4;
	int B[1][1] = 5;
	int B[1][2] = 6;

	int(*p)[3] = B;

	printf("%d \n",B);			 this returns the address of the starring byte for the whole 2-D array
	printf("%d \n",*B);			 this is the address for the whole array
	printf("%d \n",B[0]);		 this is just the address of the first integer in 1st array
	printf("%d \n",&B[0][0]);	 address of the first element    

	*/
	
	int C[3][2][2] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	printf("%d \n",C);
	printf("%d \n",*C);    C[0] (    //it is a 2-D array) or &C[0][0]
	printf("%d \n",*(C[0][1]+1));    //S1: C[0][1] we go to 1st 1-D Array, 
									 //S2: C[0][1][0] OR C[0][1][1]... It can be either of these two right now we are on C[0][1][0]
									 //S3: one pointer arithmetic and now we are on C[0][1][1]
									 //S4: dereferencing will give us the element present at C[0][1][1]
	printf("%d \n", *(C[1]+1));
	printf("%d \n", C[1][1][0]);

	int D[3][2][2] = {{{2,5} ,{7,9}}
						,{{2,5} ,{7,9} }
						,{{2,5} ,{7,9}}};
	printf("%d %d %d %d \n",D,*D,D[0],&D[0][0]);
	printf("%d",*(D[0][0]+1));

}	