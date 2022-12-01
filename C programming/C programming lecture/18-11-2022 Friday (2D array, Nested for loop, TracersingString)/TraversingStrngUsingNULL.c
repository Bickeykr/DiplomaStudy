#include<stdio.h>

void main(){
	
	char s[11]="bickey";
	int i, count = 0;
	
	while(s[i]!=NULL){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'  ){
			count ++ ;
		}
		i++;
	}
	printf("The number of vowels in the char is %d", count);
}
