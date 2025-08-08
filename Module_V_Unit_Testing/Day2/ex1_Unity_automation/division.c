#include "demo.h"

int division(int a, int b)
{
    if (b == 0)
    {
        // Handle division by zero; Unity can test for this
        return 0;
    }
    return a / b;
}
