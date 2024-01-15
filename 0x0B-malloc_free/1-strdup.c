#include "main.h"
#include <string.h>

/**
 * _strdup - duplicate string
 * @str: string to copy.
 * Return: string with duplicate characters
*/
char *_strdup(char *str)
{
    char *ptr;
    size_t length;

    if (str == 0)
    {
        return (NULL);
    }
    length = strlen(str);
    ptr = malloc((length + 1) * sizeof(char));
    {
        if (ptr == NULL)
        {
            return (NULL);
        }
    }
    strcpy(ptr, str);
    return (ptr);
}
