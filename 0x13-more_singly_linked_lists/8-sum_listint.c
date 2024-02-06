#include "lists.h"
/**
 * sum_listint - function to calculate sum of lists.
 * @head: the head of the list.
 * Return: the sum of lists.
*/
int sum_listint(listint_t *head)
{
	listint_t *cur = head;
	int sum = 0;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
