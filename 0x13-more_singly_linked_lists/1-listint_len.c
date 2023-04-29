#include "lists.h"

/**
 * listint_len - Returns elements of numbers  in a linked list.
 * @h: points to the head of the list.
 *
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
