//WAP to find to check weather the applicant is eligiable to get a driving license or not Condition age sould be over 18, applicant should have a learner's license, Applicant should have passed drive testing


#include<stdio.h> 

void main(){
	int age;
	char ll,dt;	
	
	printf("Enter your age\n");
	scanf("%d",&age);
	fflush(stdin);
	printf("Do you have a learner license? y or n?\n");
	
	scanf("%c",&ll);
		fflush(stdin);

	printf("Did you pass the driving test? y or n?\n");
	scanf("%c",&dt);

	
	
	
	if(age>=18 && ll == "y" && dt == "y"  ){
		printf("You will get your DL\n");
	}else {
		printf("You will not get your DL\n");
	}
	 
	
}





