// Implemented it but it does not give the right answer for some reason idk

#include<stdio.h>


int main()
{

	int k = 0, i, j, matrix[5][5], temp = 0, count = 0;
	
		for (i = 0; i < 5; i++) {
			scanf_s("%d %d %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2], &matrix[i][3], &matrix[i][4]);
		}
	
		for (i = 0; i < 5; i++) {

			for (j = 0; j < 5; j++) {
				if (matrix[i][j] == 1) {
					
					
					k = j;
					if (k > 2) {
						while (k != 2) {
							temp = matrix[i][k];
							matrix[i][j] = matrix[i - 1][k];
							matrix[i - 1][k] = temp;
							count++;
							k--;
						}


					}
					else {
						while (k != 2) {
							temp = matrix[i][k];
							matrix[i][k] = matrix[i - 1][k];
							matrix[i + 1][k] = temp;
							count++;
							k++;
						}
					}
				}
			}
		}
			printf("%d", count);

}