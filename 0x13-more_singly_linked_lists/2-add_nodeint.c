#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of the list.
 * @head: point to a pointer yhat to the head of the list.
 * @n: value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
	return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
