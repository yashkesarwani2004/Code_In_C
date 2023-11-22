#include <stdio.h>

int main()
{
    // Question is= write a C program to input any alphabet and check whether it is vowel or consonant.
    char ch;
    printf("Enter An Alphabet You Want To Check Whether It Is Vowel Or Consonant:\n");
    scanf("%c", &ch);

    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The Alphabet You Are Enter Is VOWEL");
    }

    else
    {
        printf("The Alphabet You Are Enter Is CONSONANT");
    }

    return 0;
}
