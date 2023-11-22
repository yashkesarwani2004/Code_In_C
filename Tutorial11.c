#include<stdio.h>

int main()
{
    int Age , Marks;
    printf("Enter Your Age\n");
    scanf("%d" , &Age);

    printf("Enter You Marks\n");
    scanf("%d" , &Marks);

    switch (Age)
    {
    case 3: 
        printf("The Age Is 3\n");
        switch (Marks)
        {
        case 45:
            printf("Your Marks Are 45\n");
            break;
        
        default:
            printf("Your Marks Are Not 45\n");
        }
        break;

    case 13:
            printf("The Age Is 13\n");
            break;

    case 23:
            printf("The Age Is 23\n");
            break;
    
    default:
            printf("Age Is Not 3, 13 Or 23\n");
    }
    return 0;
}
