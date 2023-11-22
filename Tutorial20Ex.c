#include <stdio.h>
// Question is: Take a number as input by user and make a multiplication table of that number.
int main()
{
    int i;
    printf("Enter The Number You Want Multiplication Table Of:\n");
    scanf("%d", &i);

    printf("The Table Of %d\n", i);

    int j;
    for (j = 1; j < 11; j++)
    {
        printf("%d x %d = %d\n", i, j, i * j);
    }

    return 0;
}
