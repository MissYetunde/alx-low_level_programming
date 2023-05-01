#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list
 * @head: Pointer to the head node pointer of the linked list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if the node at the given index is deleted successfully,
 * -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	current = *head;
	if (index == 0)
	{
	*head = current->next;
	free(current);
	return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
	prev = current;
	current = current->next;
	}

	if (current == NULL)
	return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
