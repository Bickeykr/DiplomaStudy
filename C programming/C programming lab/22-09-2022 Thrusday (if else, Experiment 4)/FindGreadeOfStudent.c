//WAP in c to find out grade of the student from the average of 5 subject marks grade A : 90-100, B : 80-89,C : 65-79, D : 40-64 ,Fail: <40. 
#include<stdio.h> 

void main(){
	float S1,S2,S3,S4,S5,avg;
	
	printf("Enter the marks of subjects S1,S2,S3,S4,S5 respectively\n");
	scanf("%f %f %f %f %f",&S1,&S2,&S3,&S4,&S5);
	
	avg = (S2+S2+S3+S4+S5)/5;
	
	if(avg>= 90 && avg<=100 ){
		printf("Grade A boi");
	}else if (avg>=80 && avg<90){
		printf("Good job Grade B");
	}else if (avg>=65 && avg<80){
		printf("We gotta work a bit hard here Grade C");
	}else if (avg>=40 && avg<65){
		printf("You bearly made it Work hard next time Grade D");
	}else{
		printf("Well we should keep moving you are fail this time but keep moving and work much harder this time");
	}
	 
	
}


