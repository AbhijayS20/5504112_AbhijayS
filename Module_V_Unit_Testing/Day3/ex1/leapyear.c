#include "leapyear.h"
#include "unity.h"
#include <stdio.h>

int IsLeapYear(int yy)
{
    if (yy < 0)
    {
        return -1; // negative year is invalid
    }

    if (yy == 0)
    {
        if (yy % 100 == 0)
        {
            if (yy % 400 == 0)
            {
                return 1; // divisible by 400 is always a leapyear
            }
            else
            {
                return 0; // divisible by 100 but not by 400 is not a leapyear
            }
        }
        return 1; // devisible by 4 but not by 100 is leapyear
    }
    return 0; // not divisble by 4 is not leapyear
}