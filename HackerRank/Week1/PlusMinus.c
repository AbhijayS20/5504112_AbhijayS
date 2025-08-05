#include <stdio.h>
/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int *arr)
{
    int positives = 0, negatives = 0, zeros = 0;

    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > 0)
            positives++;
        else if (arr[i] < 0)
            negatives++;
        else
            zeros++;
    }
    printf("%.6f\n", (float)positives / arr_count);
    printf("%.6f\n", (float)negatives / arr_count);
    printf("%.6f\n", (float)zeros / arr_count);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    plusMinus(n, arr);
    return 0;
}
