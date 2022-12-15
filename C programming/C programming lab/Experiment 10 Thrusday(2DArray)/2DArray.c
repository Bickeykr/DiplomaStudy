// We are storing roll no of student in one colume and marks in other

#include<stdio.h>

void main(){
	int i,j,array[3][2];
	
	for(i=0;i<3;i++){
		printf("Enter the roll no and marks of student array[%d][0] \n",i);
		scanf("%d%d",&array[i][0],&array[i][1]);
	}
	
	for(j=0;j<3;j++){
		printf("Roll no and marks of student array[%d][0] is : %d %d\n",j,array[j][0],array[j][1]);
	}
	 
}