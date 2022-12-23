#include<stdio.h>

void swapv(int x, int y);

void main(){
	int a = 10, b =20;
	
	swapv(a,b);
	printf("\na = %d and b = %d", a,b);
}

void swapv(int x, int y){
	int t;
	t = x;
	x = y;
	y = t;
	
	printf("\nx = %d and y = %d",x,y);
}
