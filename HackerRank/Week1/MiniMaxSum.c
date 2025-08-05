#include <stdio.h>

int main()
{
    long int arr[5];
    long total = 0;
    long min, max;

    for (int i = 0; i < 5; ++i)
    {
        scanf("%ld", &arr[i]);
        total += arr[i];
    }

    min = max = total - arr[0];

    for (int i = 1; i < 5; ++i)
    {
        long sum4 = total - arr[i];
        if (sum4 < min)
            min = sum4;
        if (sum4 > max)
            max = sum4;
    }

    printf("%ld %ld\n", min, max);

    return 0;
}
