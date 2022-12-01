#include<stdio.h>

void main(){
	int j,i = 3;
	printf("\nAddress of i = %u", &i);
	printf("\nValue of i = %d", i);
	printf("\nValue of i = %d", *(&i));
	j = &i;
	
	printf("\nValue of j = %d",j);
	printf("\nAddress of j = %u", &j);

}
