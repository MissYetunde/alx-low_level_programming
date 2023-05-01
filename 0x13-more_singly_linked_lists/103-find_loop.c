#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node of the list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a = head, *b = head;

	while (a && b && b->next)
	{
	a = a->next;
	b = b->next->next;
	if (a == b)
	{
	a = head;
	while (a && b)
	{
	if (a == b)
	return (a);
	a = a->next;
	b = b->next;
	}
	}
	}

	return (NULL);
}
