//WAP in c to calculate area and perimeter of the circle.

#include<stdio.h>
void main()
{
float radius,area,peri;
float pi=3.14;

printf("Enter value of radius\n");
scanf("%f",&radius);
area = pi*radius*radius;
peri = 2*pi*radius;
printf("area is %f\nperi is %f\n", area,peri);

}
