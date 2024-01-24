#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (array == NULL && cmp == NULL)
    {
        return (-1);
    }
    if (size <= 0)
    {
        return (-1);
    }
    i = 0;
    while (i < (int)size)
    {
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}