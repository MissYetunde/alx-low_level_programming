#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: poits to a pointer that point to the head of the list.
 *
 * Description: frees each node of a linked list start
 * from the head node and sets the head pointer to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
	node = *head;
	*head = (*head)->next;
	free(node);
	}

	*head = NULL;
}
