#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint - add node to begining of list
 *@n: data of new node
 *@head: first node of given list
 *Return: addres of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
return (new_node);
}
