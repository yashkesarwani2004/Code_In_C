#include <stdio.h>
// Question is: Unit and conversions of: 1)kms to miles. 2)inches to foot. 3)cms to inches. 4)pound to kgs. 5)inches to meters.

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float First, Second;

    while (1)
    {
        printf("Enter the input character . q to quit\n  1.kms to miles\n  2.inches to foot\n  3.cms to inches\n  4.pound to kgs\n  5.inches to meters\n");
        scanf("%c",&input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program....");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit:\n");
            scanf("%f", &First);
            Second = First * kmsToMiles;
            printf("%f kms is equal to %0.2f miles\n\n", First, Second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit:\n");
            scanf("%f", &First);
            Second = First * inchesToFoot;
            printf("%f inches is equal to %0.2f foot\n\n", First, Second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit:\n");
            scanf("%f", &First);
            Second = First * cmsToInches;
            printf("%f cms is equal to %0.2f inches\n\n", First, Second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit:\n");
            scanf("%f", &First);
            Second = First * poundToKgs;
            printf("%f Pounds is equal to %0.2f kgs\n\n", First, Second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit:\n");
            scanf("%f", &First);
            Second = First * inchesToMeters;
            printf("%f inches is equal to %0.2f meters\n\n", First, Second);
            break;

        default:
            printf("In default now");
            break;
        }
    }
end:

    return 0;
}
