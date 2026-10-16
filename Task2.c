#include <stdio.h>

int main()
{
    float x = 0;
    float y = 0;

    scanf("%f", &x);

    if (x >= 0 && x < 7)
    {
        y = -6 * x * x + 8;
        printf("y = %f\n", y);
    }
    else if (x > -10 && x < 11)
    {
        printf("Function does not exist\n");
    }
    else
    {
        y = -(x * x * x) / 7 + 10;
        printf("y = %f\n", y);
    }
    return 0;
}