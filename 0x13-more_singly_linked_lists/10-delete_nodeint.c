#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *cur = *head;
    listint_t *prev = NULL;
    unsigned int i;

    if (*head == NULL)
    {
        return (-1);
    }
    if (index == 0)
    {
        *head = (*head)->next;
        free(cur);
        return (1);
    }

    for (i = 0; cur != NULL && i < index; i++)
    {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL)
    {
        return (-1);
    }

    prev->next = cur->next;

    free(cur);
    return (1);
}