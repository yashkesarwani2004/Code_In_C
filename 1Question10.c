#include <stdio.h>

int main()
{
    // Question is= write a program to check Whether A Number is negative, positive or zero.
    int num;
    printf("Enter A Number You Want To Check Whether A Number Is Negative, Positive or zero:\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The Number You Are Enter Is POSITIVE");
    }

    else if (num == 0)
    {
        printf("The Number You Are Enter Is ZERO");
    }

    else
    {
        printf("The Number You Are Enter Is NEGATIVE");
    }

    return 0;
}
