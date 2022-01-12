#include "lists.h"

/**
 *dlistint_t *add_dnodeint_end - add node at end
 *@head: pointer to first node
 *@n: new node data
 *Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *head;

	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		new_node->n = n;
		new_node->next = NULL;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	return (new_node);
}
