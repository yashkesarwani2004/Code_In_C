#include <stdio.h>
//  Question is= Write a c program to find the sum of first 10 natural numbers..
int main()
{
    int i, sum = 0;
    printf("The first 10 natural number is:\n");

    for (i = 1; i < 11; i++)
    {
        sum = sum + i;
        printf("%d", i);
    }
    printf("\nThe sum is :%d\n" , sum);
    return 0;
}
