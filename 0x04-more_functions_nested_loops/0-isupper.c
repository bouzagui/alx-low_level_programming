#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to be checked for upper case characters.
 * @c: The argument to be checked for upper case characters.
 * 
 * Return: if the argument is uppercase return 1, or 0 otherwise.
*/
int _isupper(int c)
{
    if (isupper(c))
    {
        return (1);
    }
    else if (islower(c))
    {
        return (0);
    }
}