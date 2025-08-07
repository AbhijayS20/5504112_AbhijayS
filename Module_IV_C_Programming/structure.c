// largest of three numbers using structures
#include <stdio.h>
int main()
{
    struct number
    {
        int a, b, c, large;
    } num;

    printf("Enter 3 numbers: \n");
    scanf("%d %d %d", &num.a, &num.b, &num.c);

    if (num.a > num.b && num.a > num.c)
        num.large = num.a;
    else if (num.b > num.a && num.b > num.c)
        num.large = num.b;
    else
        num.large = num.c;

    printf("Largest number is: %d", num.large);

    return 0;
}