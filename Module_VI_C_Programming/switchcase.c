#include <stdio.h>
int main()
{
    int num;
    while (1)
    {
        printf("Enter number of day in the week (betweek 1 to 7): \n");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tueday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Oops! You have enter an invaid number in the week\n");
        }
    }
    return 0;
}