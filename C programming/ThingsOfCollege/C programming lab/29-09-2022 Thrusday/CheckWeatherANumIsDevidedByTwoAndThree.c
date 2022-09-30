// WAP in C to check weather the no is devisable by 2 and 3 both or not
#include <stdio.h>

void main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0)
    {
        printf("%d is devisable by 2 and 3 both", num);
    }
    else
    {
        printf("%d isn't devisable by 2 and 3 both", num);
    }
}