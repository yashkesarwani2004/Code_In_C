#include <stdio.h>
#include <string.h>

func1(int a, int b)
{
    auto int sum;
    printf("The value of sum is %d\n", sum);
    return a + b;
}
int main()
{
    func1(3, 5);
    // printf("The value of sum is %d\n", sum);
    return 0;
}