#include <stdio.h>

int main()
{
  // Question is= write a C programe print total number of days in a month using switch case.
  int mon;
  printf("Enter A Month Number You Want TO Find Total Number Of Days:\n");
  scanf("%d", &mon);

  switch (mon)
  {
  case 1 || 3 || 5 || 7 || 8 || 10 || 12:
    printf("The Total Number Of Days In This Month Is 31:\n");
    break;

  case 4 || 6 || 9 || 11:
    printf("The Total Number Of Days In This Month Is 30:\n");
    break;

  case 2:
    printf("The Total Number Of Days In This Month Is 28/29:\n");
    break;

  default:
    printf("Invalid Input Please Check It Again:\n");
  }
  return 0;
}
