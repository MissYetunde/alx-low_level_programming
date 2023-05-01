#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: A pointer to the address of the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *p1, *p2;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	return (0);

	p1 = *h;
	p2 = (*h)->next;
	while (p1 != NULL && p1 < p2)
	{
	free(p1);
	count++;
	p1 = p2;
	p2 = p2->next;
	}
	free(p1);
	count++;

	*h = NULL;

	return (count);
}
