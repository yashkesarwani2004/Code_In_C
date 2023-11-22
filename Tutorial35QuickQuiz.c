#include <stdio.h>
#include <string.h>
// Question is- Allow user to enter two strings and then concatenate them by saying that
// str1 is a friend of str2.

int main()
{
    char str1[50];
    char str2[50];

    gets(str1);
    gets(str2);
    printf("%s is a friend of %s:\n", str1, str2);
    puts(strcat(str1, str2));
    return 0;
}