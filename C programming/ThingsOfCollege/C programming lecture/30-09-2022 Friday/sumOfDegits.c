
////WAP to find the sum of entered NO

#include<stdio.h>  
 int main()    
{    
int num,sum=0,mod;    
printf("Enter a number:\n");    
scanf("%d",&num);    
while(num>0)    
{    
mod=num%10;    
sum=sum+mod;    
num=num/10;    
}    
printf("Sum is = %d",sum);    
return 0;  
}   
