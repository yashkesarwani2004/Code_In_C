#include <stdio.h>
int main()
{
    int a = 3;
    int *ptr =NULL;
    if (ptr != NULL)
    {
        printf("The value of a is %d\n", *ptr); /*The pointer is not a NULL pointer and can be dereferenced..*/
    }
    else
    {
        printf("The pointer is a NULL pointer and cannot be dereferenced.");
    }
    return 0;
}