#include<iostream>

using namespace std;

int main(){
	
int num,sum=0,mod;    
cout<<"Enter a number:\n" ;   
cin>>num;
while(num>0)    
{    
mod=num%10;    
sum=sum+mod;    
num=num/10;    
}    
cout<<"Sum is = "<<sum;
return 0;  
}
