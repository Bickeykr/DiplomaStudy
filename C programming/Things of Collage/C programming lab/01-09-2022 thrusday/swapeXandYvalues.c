#include<stdio.h>
void main()
{
int x,y,temp; 

printf("Enter value of x\n");
scanf("%d",&x);
printf("Enter value of y\n");
scanf("%d",&y);
temp =x;
x=y;
y=temp;

printf("x is %d\ny is %d\n", x,y);
}
