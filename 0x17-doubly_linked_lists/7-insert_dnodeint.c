#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * in a doubly linked list
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h;

if (current == NULL)
{
return (NULL);
}
if (idx == 0)
{
*h;
new->next = NULL;
new->prev = NULL;
}
}
