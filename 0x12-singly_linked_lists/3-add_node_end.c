#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_head;
    list_t *last_head = *head;

    new_head = malloc(sizeof(list_t));
    if (new_head == NULL)
    {
        return (NULL);
    }
    new_head->str = strdup(str);
    if (new_head->str == NULL)
    {
        free(new_head);
        return (NULL);
    }
    new_head->len = strlen(str);
    new_head->next = NULL;
    if (*head == NULL)
    {
        *head = new_head;
        return (new_head);
    }
    while (last_head->next != NULL)
    {
        last_head = last_head->next;
    }
    last_head->next = new_head;
    return (new_head);
}