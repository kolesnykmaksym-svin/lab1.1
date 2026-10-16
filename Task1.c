#include <stdio.h>

int main()
{
    float x = 0;
    float y = 0;

    scanf("%f", &x);

    if (x >= 0)
    {
        if (x < 7)
        {
            y = -6 * x * x + 8;
            printf("y = %f\n", y);
        }
        else
        {
            if (x >= 11)
            {
                y = -(x * x * x) / 7 + 10;
                printf("y = %f\n", y);
            }
            else
            {
                printf("Function does not exist\n");
            }
        }
    }
    else
    {
        if (x <= -10)
        {
            y = -(x * x * x) / 7 + 10;
            printf("y = %f\n", y);
        }
        else
        {
            printf("Function does not exist\n");
        }
    }
    return 0;
}