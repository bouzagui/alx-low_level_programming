#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
return (new);
}
