#include <stdio.h>

int main()
{
    int i, j, num;
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", i);

        for (j = 0; j < 8; j++)
        {
            printf("Enter the number.Enter 0 to exit\n");
            scanf("%d", &num);

            if (num == 0)
            {
                goto end;
            }
        }
    }

end:
    return 0;
}
