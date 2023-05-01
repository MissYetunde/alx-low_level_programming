#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: Points to the head node of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Point to the nth node, or NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nth_node;

	if (head == NULL)
	return (NULL);

	nth_node = head;
	for (i = 0; i < index; i++)
	{
	if (nth_node == NULL)
	return (NULL);
	nth_node = nth_node->next;
	}

	return (nth_node);
}
