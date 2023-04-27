#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head != NULL)
	{
	tem = head;
	head = head->next;
	free(tem->str);
	free(tem);
	}
}
