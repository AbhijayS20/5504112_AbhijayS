// Even/Odd number
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("\n %d is an Even Nummber", num);
    else
        printf("\n %d is an Odd Nummber", num);

    return 0;
}
