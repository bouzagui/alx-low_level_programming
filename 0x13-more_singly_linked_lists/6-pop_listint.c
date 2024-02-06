#include "lists.h"
/**
 * pop_listint - pop a list.
 * @head: the head of the list.
 * Return: current position.
*/
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int count;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		count = (*head)->n;
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}
	return (count);
}
