#include <stdio.h>
#include "demo.h"

int main()
{
    int a = 20, b = 30, c, d, e, f;
    float g;
    c = sum(a, b);
    d = square(a);
    e = product(a, b);
    f = difference(b, a);
    g = division(b, a);

    printf("Sum is: %d\n", c);
    printf("Square is: %d\n", d);
    printf("Product is: %d\n", e);
    printf("Difference is: %d\n", f);
    printf("Division is: %.2f\n", g);

    return 0;
}