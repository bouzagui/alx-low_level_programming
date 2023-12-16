#include <stdio.h>

/**
 * main - function to be printed different combinations of two digits
 * 
 * Return: Always 0.
*/
int main(void)
{
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = 1 + i; j < 10; j++)
        {
            putchar(i + '0');
            putchar(j + '0');
            //Check the last digits to finish printing the Comma.
            if (i != 8 || j != 9)
            {
                putchar(' ');
                putchar(',');
            }
        }
    }
    putchar('\n');
    return (0);
}