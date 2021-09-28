#include<stdio.h>
int main()
{ float x, y;
FILE *fpx, *fpy;
fpx = fopen("x.txt","w");
fpy = fopen("y.txt","w");
for (x = 0; x<=10; x = x+0.1)
{ y = x;
fprintf(fpx, "%f\n", x);
fprintf(fpy, "%f\n", y);
}
printf("Data has been stored in the files");
fclose(fpx);
fclose(fpy);
getchar(); return 0; }
