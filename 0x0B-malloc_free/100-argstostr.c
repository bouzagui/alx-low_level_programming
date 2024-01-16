#include "main.h"
#include <string.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    int i = 0, j = 0;
    char *ptr;
    size_t len = 0;

    if (ac == 0 || av == NULL)
    {
        exit(0);
    }
    while (i < ac)
    {
        len += strlen(av[i]);
        i++;
    }
    ptr = malloc((len + ac) * sizeof(char));
    if (ptr == NULL)
    {
        exit(0);
    }
    i = 0;
    while (i < ac)
    {
        j = 0;
        while (ptr[j] != '\0')
        {
            ptr[i + j] = av[i][j];
            j++;
            i++;
        }
        ptr[i] = '\n';
    }
    ptr[i] = '\0';
    return (ptr);
}
