#include<stdio.h>
void main()
{
int num1,num2; 

printf("Enter value of num1\n");
scanf("%d",&num1);
printf("Enter value of num2\n");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;

printf("num1 is %d\nnum2 is %d\n", num1,num2);
}
