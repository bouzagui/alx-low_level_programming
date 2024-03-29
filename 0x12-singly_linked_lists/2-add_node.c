#include "lists.h"
/**
 * add_node - add a node to the list.
 * @head: the head of the list.
 * @str: the string to add.
 * Return: the index of the node.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

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
	new_head->next = *head;

	*head = new_head;
	return (new_head);
}
