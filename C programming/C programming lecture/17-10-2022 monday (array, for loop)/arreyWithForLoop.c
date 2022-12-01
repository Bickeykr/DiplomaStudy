#include<stdio.h>

void main(){
	int a[5],i;
	for (i=0;i<5;i++){
	
	printf("Enter the value of a[%d]; \n",i);
	scanf("%d",&a[i]);	
	}
		for (i=0;i<5;i++){
	
	printf("the value of a[%d] is %d \n",i,a[i]);
	
	}
	
	printf("a[5]:%d",a[5]);
}
