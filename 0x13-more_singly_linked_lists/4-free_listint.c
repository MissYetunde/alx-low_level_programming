#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free a linked list.
 * @head: A pointer to the head of the list.
 *
 * Description:x frees each node of a linked list starts
 * from the head node.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
{
	tmp = head;
	head = head->next;
	free(tmp);
}
}
