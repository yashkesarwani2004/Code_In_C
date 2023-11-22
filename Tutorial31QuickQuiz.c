#include <stdio.h>
// Question is= a aur b ko koi value do fir call by reference se a ki value a+b kar do aur b ki value a-b kar do...

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *x + *y;
    *y = temp - *y;
return;
}

int main()
{
    int a = 4, b = 3;
    printf("The value of a is %d And the value of b is %d.\n", a, b);
    swap(&a, &b);
    printf("The value of a now is %d And the value of b now is %d.", a, b);
    return 0;
}