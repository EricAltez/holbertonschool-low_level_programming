#include "lists.h"

/**
 *dlistint_t *add_dnodeint - add node at front
 *@head: pointer to first node
 *@n: value of new node
 *Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
