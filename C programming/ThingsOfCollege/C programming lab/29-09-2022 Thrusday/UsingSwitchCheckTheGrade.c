#include <stdio.h>
void main(){
    char grade;

    printf("Enter your grade\n");
    scanf("%c",&grade);
    switch (grade)
    {   
    case 'A':
        printf("Excellent\n");
        break;
    
    case 'B':
        printf("Good\n");
        break;
        
    case 'C':
        printf("Satisfactory\n");
        break;
        
    case 'D':
        printf("Below average\n");
        break;
        
    case 'F':
        printf("FAIL\n");
        break;
    default:
        printf("Enter a valid grade \n");
        break;
    }
}
