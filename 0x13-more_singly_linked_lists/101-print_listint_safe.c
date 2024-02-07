#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_and_print_listint_safe - prints a listint_t linked list safely
 * and frees it
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t free_and_print_listint_safe(listint_t **head)
{
    size_t nnodes = 0;
    listint_t *curr = *head;
    listint_t *temp;
    listint_t *cycle_check = NULL;

    while (curr != NULL)
    {
        temp = curr->next;
        printf("[%p] %d\n", (void *)curr, curr->n);
        nnodes++;

        if (cycle_check != NULL && curr == cycle_check)
        {
            printf("-> [%p] %d\n", (void *)curr, curr->n);
            printf("List has a cycle\n");
            break;
        }

        cycle_check = curr;
        curr = temp;
    }

    curr = *head;
    while (curr != NULL)
    {
        temp = curr->next;
        free(curr);
        curr = temp;
    }

    *head = NULL;
    return nnodes;
}
