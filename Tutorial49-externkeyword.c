#include <stdio.h>
#include "tutorial49-temp.c"

myfunc(int a,int b)
{
    extern int sum;
    return sum;
}
int sum = 567;
int main()
{
    
   myfunc(3,5);
    return 0;
}