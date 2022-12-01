//int fputc(intc, FILE*stream)

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen ("file1.txt","w"); // opening file
	fputc('b',fp);//writing single character into file
	fclose(fp);//closing file
	return 0;
}
