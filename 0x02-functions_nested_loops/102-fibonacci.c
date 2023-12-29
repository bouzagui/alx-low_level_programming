#include <stdio.h>

int main(void)
{
    long i, a = 0, b = 1, sum = 0;

    for (i = 0; i < 50; i++)
    {
            sum = a + b;
            a = b;
            b = sum;
            printf("%lu", b);
            if (b == 49)
            {
                printf("\n");
            }
            else
            {
                printf(", ");
            }
    }
}