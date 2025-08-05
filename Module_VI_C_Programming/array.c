#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5]; // static alloc
    int i;

    printf("Enter numbers one by one:\t");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);

    for (i = 0; i < 5; i++)
        printf("%d\n", arr1[i]);

    return 0;
}