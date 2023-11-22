#include <stdio.h>
#include <string.h>
// yaha per hmko bas aak hi at a time sahi milega baaki galat milega kyuki union sharing kar deta hai memory location sab ke saath aur jo last me hoga vahi ka sahi rahega jaisa name vala yaha per sahi hai....
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Harry");

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav_char is %c\n", s1.fav_char);
    printf("The name is %s\n", s1.name);
    return 0;
}