//#include<stdio.h>
//
//void Func(int (*A)[2][2]) {
//							// some people use ** for 2-D arrays wwhich does not work
//							// some people use *** for 3-D arrays wwhich does not work
//
//}
//
//int main() {
//	int D[3][2][2] = { {{2,5} ,{7,9}}
//						,{{2,5} ,{7,9} }
//						,{{2,5} ,{7,9}} };
//	int A[2] = { 1,2 };
//	int B[2][3] = { {2,4,5},{5,7,8} }; // B returns int (*)[3] ( b returns a pointer to an array of size 3)
//	Func(D);  // a return *int (returns pointer to an int	)
//}