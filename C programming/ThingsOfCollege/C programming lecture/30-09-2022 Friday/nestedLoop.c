#include <stdio.h>

int main()
{

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
            printf("%d%d\n", i, j);
    }
}