#include "lists.h"
/**
 * reverse_listint - function to reverse list.
 * @head: the head of the list.
 * Return: the index of the head of the list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
	return (cur);
}
