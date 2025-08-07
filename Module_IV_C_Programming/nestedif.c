// Find grade of the students based on their score
#include <stdio.h>
int main()
{
    int score;
    printf("Hey Student! Please enter your mark scored:\a\t\n");
    if (scanf(" %d", &score) != 1)
    {
        printf("Enter a valid integer input\n");
        return 1;
    }

    if (score >= 90)
    {
        printf("Your Grade is A\n");
    }
    else if (score >= 80)
    {
        printf("Your Grade is B\n");
    }
    else if (score >= 70)
    {
        printf("Your Grade is C\n");
    }
    else
    {
        printf("Your Grade is D\n");
    }
    return 0;
}