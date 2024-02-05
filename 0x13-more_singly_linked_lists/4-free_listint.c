#include "lists.h"

/**
 * free_listint - function to be freed when list.
 * @head: list head.
*/

void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
