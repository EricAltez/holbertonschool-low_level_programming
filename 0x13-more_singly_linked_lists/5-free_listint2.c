#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint2 - frees listint_t and set head to NULL
 *@head: first node of given list
 */
void free_listint2(listint_t **head)
{
listint_t *aux;

	if (head == NULL)
		return;

	while (head)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
	*head = NULL;
}
