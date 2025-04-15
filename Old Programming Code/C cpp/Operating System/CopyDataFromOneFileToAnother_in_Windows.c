#include<stdlib.h>
#include<stdio.h>

//  HOW TO RUN
// use cmd
// type CopyDataFrom... src.txt target.txt

int main(int argc,char *argv[])
{
	FILE *mf; 
	FILE *cf;
	char ch;
	
	if(argc != 3){ // if the file not either of main file or the copy file
		printf("Invalid argument\n");
		exit(1);
	}
	mf=fopen(argv[1],"r"); // file1 for reading 
	cf=fopen(argv[2],"w"); // file2 for writing
	
	if(mf == NULL && cf == NULL){
	printf("FIle opening error or file did not found\n");
	exit(1);
	}
	
	ch=fgetc(mf);
	while(ch!=EOF){ // do this until the end of the file
		fputc(ch,cf); // write the characters into the file
		ch=fgetc(mf); // get character from the main file
	}
	printf("file copied successfully \n");
	fclose(mf);
	fclose(cf);


}
