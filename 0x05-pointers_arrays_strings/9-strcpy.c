#include <stdio.h>
#include "main.h"
#include <string.h>

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; i < strlen(src); i++)
    {
        strcpy(dest, src);
    }
    return (dest);
}
