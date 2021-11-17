#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - add new node to the end of the list
 *@head: first node of the given list
 *@n: new node data
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endnode, *aux = *head;

	new_endnode = malloc(sizeof(listint_t));
	if (!new_endnode)
		return (NULL);
	new_endnode->n = n;
	new_endnode->next = NULL;

	if (*head == NULL)
	{
		*head = new_endnode;
		return (new_endnode);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new_endnode;
return (new_endnode);
}
