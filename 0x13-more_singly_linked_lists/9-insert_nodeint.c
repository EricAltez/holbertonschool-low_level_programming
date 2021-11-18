#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_nodeint_at_index - insert node at given location
 *@head: pointer to the first node
 *@idx: index
 *@n: node data
 *Return: addres of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *indexnode, *aux;
unsigned int i = 0;

	indexnode = malloc(sizeof(listint_t));
	if (!indexnode)
		return (NULL);
	indexnode->n = n;
	indexnode->next = NULL;
	if (!head)
		return (NULL);
	aux = *head;
	if (!head)
	{
		indexnode->next = NULL;
		*head = indexnode;
		return (indexnode);
	}
	if (idx == 0)
	{
		indexnode->next = *head;
		*head = indexnode;
		return (indexnode);
	}
	for  (i = 0; i < idx; i++)
	{
		aux = aux->next;
		if (!aux)
			return (NULL);
	}
	indexnode->next = aux->next;
	aux->next = indexnode;
return (indexnode);
}
