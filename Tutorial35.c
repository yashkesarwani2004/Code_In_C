#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];

    // puts(strcat(s1, s2));
    // printf("The lenth of s1 is %d\n", strlen(s1));
    // printf("The lenth of s2 is %d\n", strlen(s2));
    // printf("The reversed string of s2 is:");
    // puts(strrev(s2));
    // printf("The reversed string of s1 is:");
    // puts(strrev(s1));

    // strcpy(s3, strcat(s1, s2));
    // puts(s3);

    printf("The strcmp for s1 , s2 returned %d", strcmp(s1, s2));

    return 0;
}