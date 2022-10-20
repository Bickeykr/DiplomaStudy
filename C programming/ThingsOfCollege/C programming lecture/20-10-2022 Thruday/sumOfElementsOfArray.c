#include<stdio.h>

void main()
{
	int a[5],i,sum=0;
	for (i=0;i<5;i++){
	
	printf("Enter the value of a[%d]; \n",i);
	scanf("%d",&a[i]);	
	}
	for (i=0;i<5;i++){
		sum=sum+a[i];
		
	}
	
	printf("Sum of each elements of arrey is %d",sum);

 }
