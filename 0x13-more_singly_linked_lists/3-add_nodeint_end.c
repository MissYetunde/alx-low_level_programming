#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of list.
 * @head: points to a pointer to the head of the list.
 * @n: value to be stored in the new node.
 *
 * Return: address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp;

	if (head == NULL)
	return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	return (node);
	}

	temp = *head;
 	while (temp->next != NULL)
	temp = temp->next;

	temp->next = node;
	return (node);
}
