#include <stdio.h>

/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

struct drivers
{
    char name[34];
    char DL_number[67];
    char route[79];
    int kms;
} n1, n2, n3;

int main()
{
    n1.name;
    n2.name;
    n3.name;
    n1.DL_number;
    n2.DL_number;
    n3.DL_number;
    n1.route;
    n2.route;
    n3.route;
    n1.kms;
    n2.kms;
    n3.kms;
    printf("Enter the details of Driver no.1\n");
    printf("Enter the name of first driver:\n");
    scanf("%s", &n1.name);
    printf("Enter the DL_number of first driver:\n");
    scanf("%s", &n1.DL_number);
    printf("Enter the route of first driver:\n");
    scanf("%s", &n1.route);
    printf("Enter the kms of first driver:\n");
    scanf("%d", &n1.kms);

    printf("Enter the details of Driver no.2\n");
    printf("Enter the name of second driver:\n");
    scanf("%s", &n2.name);
    printf("Enter the DL_number of second driver:\n");
    scanf("%s", &n2.DL_number);
    printf("Enter the route of second driver:\n");
    scanf("%s", &n2.route);
    printf("Enter the kms of second driver:\n");
    scanf("%d", &n2.kms);

    printf("Enter the details of Driver no.3\n");
    printf("Enter the name of third driver:\n");
    scanf("%s", &n3.name);
    printf("Enter the DL_number of third driver:\n");
    scanf("%s", &n3.DL_number);
    printf("Enter the route of third driver:\n");
    scanf("%s", &n3.route);
    printf("Enter the kms of third driver:\n");
    scanf("%d", &n3.kms);

    printf("\t\t\n");
    
    printf("********PRINTING THE INFORMATION OF THESE DRIVERS********:\n");
    printf("For driver no.1:\n");
    printf("Name is %s\n", n1.name);
    printf("DL_number is %s\n", n1.DL_number);
    printf("Route is %s\n", n1.route);
    printf("Kms is %d\n", n1.kms);

    printf("For driver no.2:\n");
    printf("Name is %s\n", n2.name);
    printf("DL_number is %s\n", n2.DL_number);
    printf("Route is %s\n", n2.route);
    printf("Kms is %d\n", n2.kms);

    printf("For driver no.3:\n");
    printf("Name is %s\n", n3.name);
    printf("DL_number is %s\n", n3.DL_number);
    printf("Route is %s\n", n3.route);
    printf("Kms is %d\n", n3.kms);

    return 0;
}
