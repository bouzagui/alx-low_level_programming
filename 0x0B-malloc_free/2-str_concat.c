#include "main.h"
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    char *ptr;
    size_t len1, len2;
    size_t index = 0;

    if (s1 != NULL)
    {
        len1 = strlen(s1);
    }
    if (s2 != NULL)
    {
        len2 = strlen(s2);
    }

    ptr = malloc(sizeof(char) * (len1 + len2 + 1));
    if (ptr == NULL)
    {
        exit(0);
    }
    while (index < len1)
    {
        ptr[index] = s1[index];
        index++;
    }
    index = 0;
    while (index < len2)
    {
        ptr[len1 + index] = s2[index];
        index++;
    }
    ptr[len1 + len2] = '\0';
    return (ptr);
}
