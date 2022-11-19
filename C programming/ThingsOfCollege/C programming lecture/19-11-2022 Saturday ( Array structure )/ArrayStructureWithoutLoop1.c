#include<stdio.h>

struct student {
	char name[20];
	int id;
	float marks;
};

void main(){
	
	struct student s1,s2,s3;
	int dummy;
	
	printf("Enter the name,id and marks of students 1\n");
	scanf("%s%d%f",s1.name,&s1.id,&s1.marks);
	 
	
	printf("Enter the name,id and marks of students 2\n");
	scanf("%s%d%f",s2.name,&s2.id,&s2.marks);
	 
	
	printf("Enter the name,id and marks of students 3\n");
	scanf("%s%d%f",s3.name,&s3.id,&s3.marks);
	 
	
	printf("Printing the details...\n");
	printf("%s %d %f\n",s1.name,s1.id,s1.marks);
	printf("%s %d %f\n",s2.name,s2.id,s2.marks);
	printf("%s %d %f\n",s3.name,s3.id,s3.marks);
	
}
