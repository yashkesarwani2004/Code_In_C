#include <stdio.h>
#include <string.h>
int factorial(int);
void main()
{   
        int n,fac;
        printf("Enter the value of n");
        scanf("%d",&n);
        fac=factorial(n);
        printf("factorial is %d",fac);
        
}
 int factorial(int n)
    {
        if (n==1)
        {
            return 0;
        }
        else if(n==2)
        {
            return 1;
        }
        else
        {
            return(factorial(n-1)+factorial(n-2));
        }
    }    