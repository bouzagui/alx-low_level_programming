#include "main.h"
#include <string.h>

void _puts(char *str)
{
    int i;
    size_t length = strlen(str);

    for (i = 0; i < length; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}