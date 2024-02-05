#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list.
 * @head: the node to be added to the end of the list.
 * @n: the number of nodes to be added.
 * Return: 0 if the node was added successfully.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nav = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	if (nav == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (nav->next != NULL)
		{
			nav = nav->next;
		}
		nav->next = newnode;
	}
	return (newnode);
}
