#include <stdio.h>

int main()
{
    int i, j = 0;
    for (i = 0; j < 5, i < 5; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
