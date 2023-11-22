#include <stdio.h>

int main()
{
    int a;
    printf("In How Many Subject You Are Pass:\n");
    printf("Enter 0 If you Pass In Maths-\n");
    printf("Enter 1 If you Pass In Science-\n");
    printf("Enter 2 If you Pass In Both Maths And Science-\n");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Congratulation You Won 15 Rupees");
    }

    else if (a == 1)
    {
        printf("Congratulation You Won 15 Rupees");
    }

    else if (a == 2)
    {
        printf("Congratulation You Won 45 Rupees");
    }

    else
    {
        printf("Sorry You Don't Won any Money");
    }

    return 0;
}
