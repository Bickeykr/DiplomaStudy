//WAP to calculate area of a triangle

#include<stdio.h>
void main()
{
float base,area,height;

printf("Enter value of base\n");
scanf("%f",&base);
printf("Enter value of height\n");
scanf("%f",&height);

area = 0.5*base*height;
printf("area of triangle is %f\n", area);

}
