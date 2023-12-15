#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int tl;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    tl = n % 10;
    if (tl > 5)
    {
        printf("Last digit of %d is %d and is great than 5\n", n, tl);
    }
    else if (tl == 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, tl);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tl);
    }
    return (0);
}