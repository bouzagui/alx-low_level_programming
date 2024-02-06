#include "lists.h"

/**
 * free_listint2 - function to be freed with free.
 * @head: the head of the list.
*/
void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}
	*head = NULL;
}
