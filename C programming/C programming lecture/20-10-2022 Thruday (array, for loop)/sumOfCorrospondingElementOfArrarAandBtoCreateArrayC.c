#include<stdio.h>

void main(){
	int a[3],b[3],c[3],i,j;
	
	for(i=0;i<3;i++){
		printf("Enter the value of a[%d] \n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		printf("Enter the value of b[%d] \n",i);
		scanf("%d",&b[i]);
	}
	
	for(j=0;j<3;j++){
		printf("Value of c[%d] is %d \n", j, a[j]+b[j] );
	};
 }
