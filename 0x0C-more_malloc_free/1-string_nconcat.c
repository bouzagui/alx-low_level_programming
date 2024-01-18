#include "main.h"
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len = strlen(s1) + n;
    unsigned int i;
    char *ptr;

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    ptr = malloc(len + 1);

    if (ptr == NULL)
    {
        exit(0);
    }
    i = 0;

    for (i = 0; s1[i]; i++)
    {
        ptr[i] = s1[i];
    }
    for (i = 0; s2[i] && i < n; i++)
    {
        ptr[len++] = s2[i];
    }
    ptr[len] = '\0';
    return (ptr);
}
