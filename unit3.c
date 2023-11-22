#include <stdio.h>

void main()
{
    for (int i = 1; i <= 4; i++)
    {
        printf("\n");
        for (int j = 4; j > i; j--)
        {
            printf(" ");
            for (int k = 1; k < j; k++)
            {
                printf("%d", 65+k);
            }
        }
    }
}