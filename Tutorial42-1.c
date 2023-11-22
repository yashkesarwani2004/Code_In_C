#include <stdio.h>
int func1()
{
    static int a;
    a++;
    return a;
}
int main()
{
    int a;
    a = func1();
    printf("%d\n", a);
    a = func1();
    printf("%d\n", a);
    a = func1();
    printf("%d\n", a);

    return 0;
}