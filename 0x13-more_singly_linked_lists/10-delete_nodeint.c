#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *delete_nodeint_at_index - deletes recuested node by index
 *@head: ptp head
 *@index: location to delete node
 *Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux1 = NULL, *aux2 = NULL;

	if (!*head)
		return (-1);
	aux1 = *head;
	for (i = 0; i < index; i++)
	{
		if (aux1 == NULL)
			return (-1);
		aux1 = aux1->next;
	}
	aux2 = aux1->next;
	aux1->next = aux2->next;
	free(aux2);
return (1);
}
