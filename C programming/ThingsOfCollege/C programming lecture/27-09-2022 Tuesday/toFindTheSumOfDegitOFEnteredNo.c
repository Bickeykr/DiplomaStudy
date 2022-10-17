//WAP to find the sum of entered NO
#include<stdio.h> 

void main(){

	int num, rem, sum = 0;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	while (num>0)
	{
	
	rem = num%10;
	sum = sum+rem;
 	printf("%d",sum);
	
	}	
//	for (i=0, i=num, i++){
//		
//	num % 10 // if num 123 = 3
//	sum = sum + 3;
//	
//	num / 10  // 12
//	
////	num = 12; 
//	
//	num % 10 // 2
//	
////	num = 12 ;
//
//	num / 10;
//	
//	n
//	sum = num % 10;
//	
//	num / 10 // 1
//	
//	
//	// 1+2+3 
//		
//	printf("%d",num);
//	}
	
		
	
}


