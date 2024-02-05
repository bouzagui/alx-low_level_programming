#include "lists.h"

size_t listint_len(const listint_t *h)
{
    const listint_t *list = h;
    size_t count = 0;

    while (list != NULL)
    {
        count++;
        list = list->next;
    }
    return (count);
}