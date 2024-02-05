#include "lists.h"

size_t print_listint(const listint_t *h)
{
    const listint_t *p = h;
    size_t count = 0;

    while (h != NULL)
    {
        printf("%i\n", p->n);
        count++;
        p = p->next;
    }
    return (count);
}