#include "lists.h"

void free_list(list_t *head)
{
    list_t *tail = head;
    list_t *count;

    while (tail != NULL)
    {
        count = tail->next;
        free(tail->str);
        free(tail);
        tail = count;
    }
}