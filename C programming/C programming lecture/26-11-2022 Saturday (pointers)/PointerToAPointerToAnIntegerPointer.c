#include<stdio.h>

void main(){
	int i = 3;
	int *j, **k;
	
	j = &i;
	k = &j;
	printf("\nAddress of i = %u", &i);
	printf("\nAddress of i = %u", j);
	printf("\nAddress of i = %u", *k);
	printf("\nAddress of j = %u", &j);
	printf("\nAddress of j = %u", k);
	printf("\nAddress of k = %u", &k);

	printf("\nValue of j = %u",j);
	printf("\nValue of k = %u",k);
	printf("\nValue of i = %d", i);
	printf("\nValue of i = %d", *(&i));
	printf("\nValue of i = %d", *j);
	printf("\nValue of i = %u",**k);
}
