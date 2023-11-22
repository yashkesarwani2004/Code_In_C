#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your age\n");
    
    scanf("%d" , &age);
    printf("You Have Entered %d As Your age\n" , age);
    if (age>=18) 
    {
        /* code */
        printf("You Can Vote!");
    }
    else if (age>=10)
    {
        printf("You Are Between 10 To 18 And You Can Vote For kids");
    }
    else if (age>=3)
    {
        printf("You Are Between 3 To 10 And You Can Vote For Babies");
    }
    else{ 
        printf("You Cannot Vote!");
    }   
    
    return 0;
}
