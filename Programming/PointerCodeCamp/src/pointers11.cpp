//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//int compare(int a, int b) {
//	if (a > b) return 1;
//	else return -1;
//}
//
//int abs_compare(int a, int b) {
//	if (abs(a) > abs(b)) return 1;
//	else return -1;
//
//}
//
//void sort(int *A, int n, int (*compare)(int,int) ){
//	int temp,j;
//	for (int i = 0;i < n;i++) {
//		for (j = 0;j < n - 1;j++) {
//			if (compare(A[j] ,A[j + 1]) > 0) { // swap if needed 
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = temp;
//		  }
//		}
//	}
//}
//
//int compare_qsort(const void* a, const void* b) {
//	int A = *((int*)a);
//	int B = *((int*)a);
//	//return A - B;
//	//return B - A;
//	return abs(B) - abs(A);
//}
//
//int main() {
//
//	int A[] = { -3,2,-1,5,6,-4 };
//	//sort(A, 6,abs_compare);
//	//for (int i = 0;i < 6;i++) { printf("%d ",A[i]); }
//	printf("\n");
//
//	qsort(A, 6, sizeof(int),compare_qsort);
//	for (int i = 0;i < 6;i++) { printf("%d ", A[i]); }
//
//	return 0;
//}
//
