#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A points to the head node of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p1, *p2;
	size_t count = 0;

	if (head == NULL)
	exit(98);

	p1 = head;
	p2 = head->next;

	while (p2 != NULL && p2 < p1)
	{
	printf("[%p] %d\n", (void *)p1, p1->n);
	p1 = p1->next;
	p2 = p2->next;
	count++;
	}

	printf("[%p] %d\n", (void *)p1, p1->n);
	count++;

	if (p2 != NULL)
	{
	p2 = p2->next;
	while (p2 != NULL && p2 > p1)
	{
	printf("[%p] %d\n", (void *)p1, p1->n);
	p1 = p1->next;
	p2 = p2->next;
	count++;
	}
	printf("-> [%p] %d\n", (void *)p1, p1->n);
	count++;
	}
	return (count);
}
