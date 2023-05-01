#include "lists.h"
/**
 * pop_listint - Delete head node of a listint_t linked list
 * and returns the head node's data (n).
 *
 * @head: Points to a pointer to the head node of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *h_node;

	if (*head == NULL)
	return (0);

	data = (*head)->n;
	h_node = (*head)->next;
	free(*head);
	*head = h_node;
	return (data);
}
