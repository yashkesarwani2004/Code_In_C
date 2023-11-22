#include <stdio.h>
// Question is- Fibonacci series 0,1,1,2,3,5,8.... output lo koi bhi number aur uska fibonacci series jaise piche ke do ka sum nikal do(By using recursive approach)

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main()
{
    int num;
    printf("Enter a term number of fabonacci series you want to find the value:\n");
    scanf("%d", &num);

    printf("The value of %dth term in fabonacci series is %d\n", num, fib_recursive(num));
    return 0;
}
