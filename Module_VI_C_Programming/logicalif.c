#include <stdio.h>
int main()
{
    int age;
    char licence;
    printf("Enter Age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Come back later... Not eligible to drive now");
        return 0;
    }
    printf("\nDoes the user have a valid Licence? (y/n)?\t");
    scanf(" %c", &licence); // Note the space before %c

    if (age >= 18 && licence == 'y')
        printf("Eligible to Drive!!!");
    else if (age >= 18 && licence == 'n')
        printf("Eligible to Drive, but get a valid licence first");
    else
        printf("Not Eligible to Drive\n");
    return 0;
}
