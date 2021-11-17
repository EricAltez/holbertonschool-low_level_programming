#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint - frees a listint_t list
 *@head: first node of given list
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
