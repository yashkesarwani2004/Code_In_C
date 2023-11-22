#include <stdio.h>
int main()
{
    int day, min;
    printf("Enter the number of days you want to convert into minutes\n");
    scanf("%d", &day);
    min = day * 1440;
    printf("Total minutes in %d days is %d\n", day, min);
    return 0;
}