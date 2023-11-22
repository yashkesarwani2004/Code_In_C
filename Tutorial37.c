#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

} harry, ravi, shubham;
// struct student harry,ravi,shubham;

void name()
{
    printf("\n%s.", harry.name);
    printf("\n%s.", ravi.name);
    printf("\n%s.", shubham.name);
}

int main()
{
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    harry.fav_char = 'p';
    ravi.fav_char = 'y';
    shubham.fav_char = 'k';

    // struct student harry={1,66,'p'};
    // struct student ravi={2,466,'y'};
    // struct student shubham={3,46,'k'};

    printf("harry id number is %d.\n", harry.id);
    printf("ravi id number is %d.\n", ravi.id);
    printf("shubham id number is %d.\n", shubham.id);

    printf("\nharry got %d marks.\n", harry.marks);
    printf("ravi got %d marks.\n", ravi.marks);
    printf("shubham got %d marks.\n", shubham.marks);

    printf("\nharry's fav_char is %c.", harry.fav_char);
    printf("\nravi's fav_char is %c.", ravi.fav_char);
    printf("\nshubham's fav_char is %c.\n", shubham.fav_char);

    strcpy(harry.name, "harry potter");
    strcpy(ravi.name, "ravi kumar");
    strcpy(shubham.name, "shubham verma");
    name();

    return 0;
}