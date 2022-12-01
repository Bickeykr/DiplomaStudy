#include <stdio.h>

int main()
{
    // local variable definition
    int a = 10;
    // do loop execution
    do
    {
        printf("avlue of a: %d\n", a);
        a = a + 1;
    } while (a < 20);

    return 0;
}