//WAP to check weather the given year is leap year or not 
//It is leap year when year is devided by 4 but not 100

#include<stdio.h> 

void main(){
	int	year;
	printf("Enter year\n");
	scanf("%d", &year);
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("Entered year is leap year");
	}else {
		printf("Not leap year");
	}
}



