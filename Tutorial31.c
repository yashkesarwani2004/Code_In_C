#include <stdio.h>
// call by reference ka question hai....

void changevalue(int *address)
{
    *address = 345;
}
int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changevalue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}