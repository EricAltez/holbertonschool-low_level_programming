#include "lists.h"

/**
 *free_dlistint - free doubly linked list
 *@head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
