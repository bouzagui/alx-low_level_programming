#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (array == NULL && cmp == NULL)
    {
        exit(-1);
    }
    if (size <= 0)
    {
        exit(-1);
    }
    i = 0;
    while (i < (int)size && size > 0)
    {
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}