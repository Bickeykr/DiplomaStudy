// This calculator calculates only int calculation

#include <stdio.h>
void main()
{
    int result, num1, num2;
    char operator;
    printf("Enter num1\n");
    scanf("%d", &num1);

    printf("Enter num2\n");
    scanf("%d", &num2);

    printf("Enter operator\n");
    fflush(stdin);
    scanf("%c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Sum of nums is %d\n", result);
        break;
    case '-':
        result = num2 - num1;
        printf(" subtraction between nums is %d\n", result);
        break;
    case '*':
        result = num2 * num1;
        printf(" Product of nums is %d\n", result);
        break;
    case '/':
        result = num2 / num1;
        printf(" The quotient of nums is %d\n", result);
        break;
    case '%':
        result = num2 % num1;
        printf(" The reminder of nums is %d\n", result);
        break;
    default:
        printf("Please enter correct inputs \n");
        break;
    }
}
