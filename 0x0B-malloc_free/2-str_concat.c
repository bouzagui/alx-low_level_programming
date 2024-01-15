#include "main.h"
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    char *ptr;
    size_t str1 = strlen(s1);
    size_t str2 = strlen(s2);

    ptr = malloc((str1 + str2 + 1) * sizeof(char));
    if (ptr == NULL)
    {
        exit(0);
    }
    strcpy(ptr, s1);
    strcat(ptr, s2);
    return (ptr);
}
